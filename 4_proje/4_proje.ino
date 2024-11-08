#define PIN_2  2
#define PIN_12 12

int butonDurum = 1;

void setup() {
  Serial.begin(9600);           // Seri haberleşme 9600 baud rate ile başlatıldı.
  /* 2. pine bağlanacak olan butona pull-up direnç bağlandığından dolayı 2. pinin konfigürasyonunda INPUT_PULLUP makrosu girilmiştir. */
  pinMode(PIN_2, INPUT_PULLUP); // Dijital Giriş-Çıkış pinlerinden olan 2. pin INPUT_PULLUP olarak konfigüre edildi. Bu pinden butonun durumu okunacaktır.
  pinMode(PIN_12, OUTPUT);      // Dijital Giriş-Çıkış pinlerinden olan 12. pin OUTPUT olarak konfigüre edildi. Bu pinle led yakılıp söndürülecektir.

}

void loop() {
  butonDurum = digitalRead(PIN_2);
  if(butonDurum == 0)
    digitalWrite(PIN_12, HIGH);
  else
    digitalWrite(PIN_12, LOW);

  Serial.println("Buton Durumu : " + String(digitalRead(PIN_2)) + " Led Durumu : " + String(digitalRead(PIN_12)));

}
