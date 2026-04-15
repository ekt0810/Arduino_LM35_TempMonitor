// Khai báo mảng chứa 3 phần tử (cho A0, A1, A2)
int adcValues[3];
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
  delay(100);
}
