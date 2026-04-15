// Khai báo mảng chứa 3 phần tử (cho A0, A1, A2)
int adcValues[3]; float nhietDo[2]; char chuoi[30];
float temps[3];

// Chân LED cảnh báo (từ Bài 3)
const int ledPin = 13; 

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // 1. Đọc giá trị ADC từ 3 kênh
  adcValues[0] = analogRead(A0);
  adcValues[1] = analogRead(A1);
  adcValues[2] = analogRead(A2);

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
