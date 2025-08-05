from flask import Flask, render_template, request, jsonify
import speech_recognition as sr
import sqlite3
import re

app = Flask(__name__)

# DB setup
def init_db():
    conn = sqlite3.connect('voicekart.db')
    c = conn.cursor()
    c.execute('''CREATE TABLE IF NOT EXISTS products (
                    id INTEGER PRIMARY KEY AUTOINCREMENT,
                    name TEXT NOT NULL,
                    price INTEGER NOT NULL,
                    quantity INTEGER NOT NULL)''')
    conn.commit()
    conn.close()

@app.route("/")
def index():
    return render_template("index.html")

@app.route("/products", methods=["GET", "POST"])
def products():
    conn = sqlite3.connect('voicekart.db')
    c = conn.cursor()
    if request.method == "POST":
        data = request.get_json()
        c.execute("INSERT INTO products (name, price, quantity) VALUES (?, ?, ?)", 
                  (data["name"], data["price"], data["quantity"]))
        conn.commit()
        conn.close()
        return jsonify({"status": "success"})
    else:
        c.execute("SELECT name, price, quantity FROM products")
        rows = c.fetchall()
        conn.close()
        products = [{"name": r[0], "price": r[1], "quantity": r[2]} for r in rows]
        return jsonify(products)

@app.route("/voice_command", methods=["POST"])
def voice_command():
    recognizer = sr.Recognizer()
    with sr.Microphone() as source:
        audio = recognizer.listen(source)
    try:
        text = recognizer.recognize_google(audio, language='hi-IN')
        match = re.search(r"नया प्रोडक्ट (\w+) कीमत (\d+) मात्रा (\d+)", text)
        if match:
            name = match.group(1)
            price = int(match.group(2))
            quantity = int(match.group(3))
            
            conn = sqlite3.connect('voicekart.db')
            c = conn.cursor()
            c.execute("INSERT INTO products (name, price, quantity) VALUES (?, ?, ?)",
                      (name, price, quantity))
            conn.commit()
            conn.close()
            
            return jsonify({"status": "success", "message": f"Added {name}"})
        else:
            return jsonify({"status": "error", "message": "Could not parse command"})
    except:
        return jsonify({"status": "error", "message": "Voice processing failed"})

if __name__ == "__main__":
    init_db()
    app.run(debug=True)
