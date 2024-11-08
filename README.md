### **Bu repositoryde Arduino UNO ile yaptığım projeler yer almaktadır.** ###
#### **Projelerin .hex uzantılı dosyaları Proteus'a aktarılmış ve devreler Proteus üzerinde denendikten sonra fiziksel olarak gerçekleştirilmiştir.** ####

### **PROJE 1 : LED YAKIP SÖNDÜRME** ###
#### Bu projede Arduino'nun ***pinMode(), digitalWrite() ve delay()*** komutları kullanılmıştır. ####
#### Dijital Giriş Çıkış pinlerinden biri olan 12. pin OUTPUT mod olarak konfigüre edilmiştir. ####
#### 12. pinin ***lojik durumunun 1*** olması durumunda ***5V*** gerilim çıkışı elde edilmiştir. ####
#### 12. pinin ***lojik durumunun 0*** olması durumunda ***0V*** gerilim çıkışı elde edilmiştir. ####
#### Lojik değişimler sırasında ***delay(500)*** komutuyla ***0.5 sn*** bekleme durumu oluşturulmuştur. ####
#### Proje 1'in Proteus'ta oluşturulan devresi eklenmiştir. ####
![1_proje](https://github.com/user-attachments/assets/6c57bb37-9a93-44e6-82f8-2dbfdf7c5919)
#### _Devrede kullanılan direncin değeri kırmızı ledin maksimum gerilim ve akım değerlerine göre belirlenmiştir._ ####

### **PROJE 2 : YÜRÜYEN IŞIK** ###
#### Bu projede Arduino'nun ***pinMode(), digitalWrite() ve delay()*** komutları kullanılmıştır. ####
#### 2, 3, 4 ve 5 pinleri konfigüre edilmiştir. ####
#### Kodun okunabilirliğinin artması amacıyla ***cikis(int, int, int, int)*** isimli fonksiyon oluşturulmuştur. ####
#### ***cikis(int, int, int, int)*** fonksiyonuna girilen ***int*** değişkenlere göre pinlerin yanıp-sönmesi sağlanmıştır. ####
#### Projede ***loop*** içerisinde çağırılan ***cikis(int, int, int, int)*** fonksiyonuna projenin amacına uygun değerler girilmiştir. Tek bir ledin yanması için sadece tek bir değer _1_ olarak gönderilmiş ve diğer değerler _0_ olarak gönderilmiştir. Bu aşamada _1_ girilen değerler ledlerin pin sırasına göre sıralanmıştır. Böylelikle proje amaca uygun çalışmıştır. ####
#### Proje 2'nin Proteus'ta oluşturulan devresi eklenmiştir. ####
![2_proje](https://github.com/user-attachments/assets/f8452085-5edb-4bf8-9c0c-ea64af36bb51)

### **PROJE 3 : SERİ PORT VE SERİ ÇİZİCİ EKRANLARININ KULLANIMI** ###
#### Bu projede Arduino'nun ***Serial.begin(), Serial.println(), digitalRead(), pinMode(), digitalWrite() ve delay()*** komutları kullanılmıştır. ####
#### Dijital Giriş Çıkış pinlerinden biri olan 2. pin OUTPUT mod olarak konfigüre edilmiştir. ####
#### Bu projede 2 nolu pine bağlı olan ledin 0.5 sn aralıklarla yanıp sönmesi sağlanmıştır. ####
#### ***setup()*** içerisinde ***Serial.begin(9600)*** komutuyla seri haberleşme 9600 ***baud rate (veri iletişim hızı)*** ile başlatılmıştır. ####
#### ***Serial.println()*** komutunun içerisine seri port ve seri çizici ekranına yansıtılmak istenen değişken yazılmıştır. ####
#### Bu projede led bağlı olan 2 nolu pinin lojik durumunun incelenmesi istenmiştir. Dolayısıla ***Serial.println*** komutununa değişken olarak ***digitalRead(PIN_2)*** komutu girişmiştir. ####
#### ***digitalRead()*** komutu sayesinde ilgili pinin lojik durumu elde edilmiştir. ***Serial.println()*** komutuyla elde edilen lojik durum seri port ve seri çizici ekranına aktarılmıştır. ####
#### Bu projede elde edilen çıktılar eklenmiştir. ####
![3_proje](https://github.com/user-attachments/assets/1411d22e-48cd-4b37-b278-c81b2ec54951)

