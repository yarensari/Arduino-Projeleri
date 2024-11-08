#define PIN_2 2
#define PIN_3 3
#define PIN_4 4
#define PIN_5 5

int gecikme = 300;
void cikis(int LED_1, int LED_2, int LED_3, int LED_4);

void setup() {
  pinMode(PIN_2, OUTPUT); // Dijital Giriş Çıkış pinlerinden olan 2. pin OUTPUT olarak konfigüre edilmiştir.
  pinMode(PIN_3, OUTPUT); // PWM pinlerinden olan 3. pin OUTPUT olarak konfigüre edilmiştir.
  pinMode(PIN_4, OUTPUT); // Dijital Giriş Çıkış pinlerinden olan 4. pin OUTPUT olarak konfigüre edilmiştir.
  pinMode(PIN_5, OUTPUT); // PWM pinlerinden olan 5. pin OUTPUT olarak konfigüre edilmiştir. 
  // Bu projede basit bir şekilde ledler yakılıp söndürülecektir. PWM pinleri amacına uygun kullanılmadan sadece HIGH-LOW seviyelerine çekilmiştir.

}

void loop() {
  cikis(1, 0, 0, 0);
  cikis(0, 1, 0, 0);
  cikis(0, 0, 1, 0);
  cikis(0, 0, 0, 1);

}

void cikis(int LED_1, int LED_2, int LED_3, int LED_4) {
  if(LED_1 == 1)
    digitalWrite(PIN_2, HIGH);
  else
    digitalWrite(PIN_2, LOW);

  if(LED_2 == 1)
    digitalWrite(PIN_3, HIGH);
  else
    digitalWrite(PIN_3, LOW);

  if(LED_3 == 1)
    digitalWrite(PIN_4, HIGH);
  else
    digitalWrite(PIN_4, LOW);

  if(LED_4 == 1)
    digitalWrite(PIN_5, HIGH);
  else
    digitalWrite(PIN_5, LOW);
  
  delay(gecikme); // 0.3 sn boyunca fonksiyona gelen değişkenlerin durması sağlanmıştır.
}
