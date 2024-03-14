int echo = 8;
int trig = 7;
int distanceInCm, timeInMicro;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
  pinMode(8, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  timeInMicro = pulseIn(echo, HIGH);
  distanceInCm = timeInMicro / 29 / 2;
  Serial.println(distanceInCm);
  delay(100);
}
