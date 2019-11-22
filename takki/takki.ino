const int takki = 2;
const int ljos = 13;
void setup() {
pinMode (ljos, OUTPUT);
Serial.begin(9600);
}

void loop() {
int lesgildi = digitalRead(takki);
Serial.println(lesgildi);
digitalWrite(ljos, lesgildi);
}
