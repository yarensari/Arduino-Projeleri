#define PIN_12 12 

void setup() {
  pinMode(PIN_12, OUTPUT);    // Digital Giriş-Çıkış pinlerinden olan 12. pin OUTPUT modda seçilmiştir. Böylelikle 12. pinden gerilim çıkışı sağlanacaktır. 
}

void loop() {
  digitalWrite(PIN_12, HIGH); // 12. pinin lojik seviyesi 1 konumuna getirilmiştir. Bu sayede 12. pinden 5V çıkışı gerçekleşecektir.
  delay(500);                 // 0.5 sn boyunca bekleme komutu verilmiştir. Bu süre boyunca kırmızı-led yanacaktır.
  digitalWrite(PIN_12, LOW);  // 12. pinin lojik seviyesi 0 konumuna getirilmiştir. Bu sayede 12. pinden 0V çıkışı gerçekleşecektir.
  delay(500);                 // 0.5 sn boyunca bekleme komutu verilmiştir. Bu süre boyunca kırmızı-led yanmayacaktır.
}