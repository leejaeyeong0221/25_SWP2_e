void setup() {
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(7, HIGH);
  delay(1000);

  for (int i = 0; i < 5; i++) {
    digitalWrite(7, HIGH);
    delay(100);
    digitalWrite(7, LOW);
    delay(100);
    }
  digitalWrite(7, LOW);
  while(true) {
    //무한루프 상태로 종료
    }
}
