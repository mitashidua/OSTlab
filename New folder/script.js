let products = [];

function addProduct() {
  const name = document.getElementById('name').value;
  const price = document.getElementById('price').value;
  const quantity = document.getElementById('quantity').value;

  if (name && price && quantity) {
    products.push({ name, price, quantity });
    renderProducts();
    clearForm();
  } else {
    alert("Please fill all fields");
  }
}

function addViaVoice() {
  if (!('webkitSpeechRecognition' in window) && !('SpeechRecognition' in window)) {
    alert("Your browser does not support speech recognition");
    return;
  }

  const SpeechRecognition = window.SpeechRecognition || window.webkitSpeechRecognition;
  const recognition = new SpeechRecognition();
  recognition.lang = 'hi-IN';  // Hindi recognition
  recognition.interimResults = false;
  recognition.maxAlternatives = 1;

  recognition.start();

  recognition.onresult = (event) => {
    const transcript = event.results[0][0].transcript;
    alert(`You said: ${transcript}`);
    parseAndAdd(transcript);
  };

  recognition.onerror = (event) => {
    alert('Error occurred in recognition: ' + event.error);
  };
}

function parseAndAdd(text) {
  // Example Hindi command: नया प्रोडक्ट आलू कीमत 20 मात्रा 5
  const match = text.match(/नया प्रोडक्ट (\w+) कीमत (\d+) मात्रा (\d+)/);
  if (match) {
    const name = match[1];
    const price = match[2];
    const quantity = match[3];
    products.push({ name, price, quantity });
    renderProducts();
  } else {
    alert("Could not parse command. Try saying: 'नया प्रोडक्ट आलू कीमत 20 मात्रा 5'");
  }
}

function renderProducts() {
  const list = document.getElementById('productList');
  list.innerHTML = '';
  products.forEach(p => {
    const li = document.createElement('li');
    li.textContent = `${p.name} - ₹${p.price} (Qty: ${p.quantity})`;
    list.appendChild(li);
  });
}

function clearForm() {
  document.getElementById('name').value = '';
  document.getElementById('price').value = '';
  document.getElementById('quantity').value = '';
}
