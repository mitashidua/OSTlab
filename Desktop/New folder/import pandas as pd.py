from flask import Flask, render_template, request, jsonify
from googletrans import Translator

app = Flask(__name__)
translator = Translator()

# Simple chatbot responses
def chatbot_response(text, lang):
    responses = {
        "hi": {"hi": "Hello! How can I help you?", "hi": "नमस्ते! मैं आपकी कैसे मदद कर सकता हूँ?", "ta": "வணக்கம்! நான் உங்களை எப்படி உதவ முடியும்?"},
        "bye": {"en": "Goodbye! Have a great day!", "hi": "अलविदा! आपका दिन शुभ हो!", "ta": "குட்பை! நல்ல நாளாக இருக்கட்டும்!"},
        "help": {"en": "Sure! I can help with information and translations.", "hi": "बिलकुल! मैं जानकारी और अनुवाद में मदद कर सकता हूँ।", "ta": "நிச்சயமாக! தகவல் மற்றும் மொழிபெயர்ப்பில் உதவ முடியும்."}
    }
    
    translated_text = translator.translate(text, dest='en').text.lower()
    for key in responses.keys():
        if key in translated_text:
            return responses[key].get(lang, responses[key]['en'])
    
    return translator.translate("Sorry, I didn't understand that.", dest=lang).text

@app.route('/')
def home():
    return render_template('index.html')

@app.route('/chat', methods=['POST'])
def chat():
    user_message = request.json['message']
    detected_lang = translator.detect(user_message).lang
    bot_reply = chatbot_response(user_message, detected_lang)
    return jsonify({"reply": bot_reply})

if __name__ == '__main__':
    app.run(debug=True)
