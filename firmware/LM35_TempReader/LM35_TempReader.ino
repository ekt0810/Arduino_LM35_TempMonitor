int adcValues[2]; float nhietDo[2]; char chuoi[30];
float temps[3];

void loop() {
  adcValues[0] = analogRead(A0);
  nhietDo[0] = (adcValues[0] * 500.0) / 1023.0;
  adcValues[1] = analogRead(A1);
  nhietDo[1] = (adcValues[1] * 500.0) / 1023.0;
  sprintf(chuoi, "%d,%d\n", (int)nhietDo[0], (int)nhietDo[1]);
  for (int i = 0; i < 3; i++) {
    temps[i] = (adcValues[i] * 500.0) / 1023.0;
  }
  Serial.print("{\"temp1\": ");
  Serial.print(temps[0]);
  Serial.print(", \"temp2\": ");
  Serial.print(temps[1]);
  Serial.print(", \"temp3\": ");
  Serial.print(temps[2]);
  Serial.println("}");
  delay(100);
}
