
bool lastButtonState = false;

void setup() {
    pinMode(12, INPUT);
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    bool button = digitalRead(12);
    if(button != lastButtonState){
        if(button == true){
            digitalWrite(LED_BUILTIN, HIGH);
            Serial.println("Button Status: ON");
        }
        else{
            digitalWrite(LED_BUILTIN, LOW);
            Serial.println("Button Status: OFF");
        }
        delay(50);
    }
    lastButtonState = button;
}