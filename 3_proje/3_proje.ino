#define PIN_2 2

void setup() {
  Serial.begin(9600);                 // 9600 baud rate (veri iletişim hızı) ile seri haberleşme başlatıldı.
  pinMode(PIN_2, OUTPUT);             // Dijital Giriş Çıkış pinlerinden olan 2 nolu pin OUTPUT olarak ayarlandı.

}

void loop() {
  Serial.println(digitalRead(PIN_2)); // 2 nolu pinin lojik durumu seri port ekranına yazdırılır ve seri çizici ekranına çizdirilir. 
  digitalWrite(PIN_2, HIGH);
  delay(500);                         // 0.5 sn boyunca 2 nolu pinin HIGH konumunda kalması sağlanır.
  Serial.println(digitalRead(PIN_2)); // 2 nolu pinin lojik durumu seri port ekranına yazdırılır ve seri çizici ekranına çizdirilir.
  digitalWrite(PIN_2, LOW);
  delay(500);                         // 0.5 sn boyunca 2 nolu pinin LOW konumunda kalması sağlanır. 
  
}
