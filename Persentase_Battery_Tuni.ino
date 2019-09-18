float v, vraw;
int percent;
float cal = 1.01;

void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);

}

void loop() {
  vraw = analogRead(A3);
  v = vraw/1023*5500*cal;
  percent = map(v, 3300, 4200, 0, 100);
  Serial.print(v);
  Serial.print(" mV || ");
  Serial.print(percent);
  Serial.println(" %");
  digitalWrite(8, !digitalRead(8));
  delay(1000);

}
