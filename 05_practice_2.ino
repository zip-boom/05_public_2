#define PIN_LED 7
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); // Initialize serial port
  while (!Serial) {
    ; // wait for serial port to connect.
  }
  Serial.println("Hello World!");
  Serial.print(count);
  Serial.println(toggle);

  count = toggle = 0;
  digitalWrite(PIN_LED, toggle); // turn off LED.  
  delay(1000);

}


void loop() {
  if (count < 11) {
    Serial.print(++count);
    Serial.println(toggle);
    toggle = toggle_state(!toggle); // toggle LED value.
    digitalWrite(PIN_LED, toggle); // update LED status.
    delay(100);

  } else {
    digitalWrite(PIN_LED, toggle);
    while (1) {
    }

  }
  
  
}

int toggle_state(int toggle) {
  return toggle;

}
