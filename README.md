### **Bu repositoryde Arduino UNO ile yaptığım projeler yer almaktadır.** ###
#### **Projelerin .hex uzantılı dosyaları Proteus'a aktarılmış ve devreler Proteus üzerinde denendikten sonra fiziksel olarak gerçekleştirilmiştir.** ####

### **PROJE 1 : LED YAKIP SÖNDÜRME** ###
#### Projede ledin 0.5 sn aralıklarla yanıp sönmesi hedeflenmiştir. ####
#### Bu projede Arduino'nun ***pinMode(), digitalWrite() ve delay()*** komutları kullanılmıştır. ####
#### Dijital Giriş Çıkış pinlerinden biri olan 12. pin ***OUTPUT*** mod olarak konfigüre edilmiştir. ####
#### 12. pinin ***lojik durumunun 1*** olması durumunda ***5V*** gerilim çıkışı elde edilmiştir. ####
#### 12. pinin ***lojik durumunun 0*** olması durumunda ***0V*** gerilim çıkışı elde edilmiştir. ####
#### Lojik değişimler sırasında ***delay(500)*** komutuyla ***0.5 sn*** bekleme durumu oluşturulmuştur. ####
#### Proje 1'in Proteus'ta oluşturulan devresi eklenmiştir. ####
![1_proje](https://github.com/user-attachments/assets/6c57bb37-9a93-44e6-82f8-2dbfdf7c5919)
#### _Devrede kullanılan direncin değeri kırmızı ledin maksimum gerilim ve akım değerlerine göre belirlenmiştir._ ####

### **PROJE 2 : YÜRÜYEN IŞIK** ###
#### Projede ledlerin sırasıyla yanması hedeflenmiştir. ####
#### Bu projede Arduino'nun ***pinMode(), digitalWrite() ve delay()*** komutları kullanılmıştır. ####
#### 2, 3, 4 ve 5 pinleri ***OUTPUT*** olarak konfigüre edilmiştir. ####
#### Kodun okunabilirliğinin artması amacıyla ***cikis(int, int, int, int)*** isimli fonksiyon oluşturulmuştur. ####
#### ***cikis(int, int, int, int)*** fonksiyonuna girilen ***int*** değişkenlere göre pinlerin yanıp-sönmesi sağlanmıştır. ####
#### Projede ***loop*** içerisinde çağırılan ***cikis(int, int, int, int)*** fonksiyonuna projenin amacına uygun değerler girilmiştir. Tek bir ledin yanması için sadece tek bir değer _1_ olarak gönderilmiş ve diğer değerler _0_ olarak gönderilmiştir. Bu aşamada _1_ girilen değerler ledlerin pin sırasına göre sıralanmıştır. Böylelikle proje amaca uygun çalışmıştır. ####
#### Proje 2'nin Proteus'ta oluşturulan devresi eklenmiştir. ####
![2_proje](https://github.com/user-attachments/assets/f8452085-5edb-4bf8-9c0c-ea64af36bb51)

### **PROJE 3 : SERİ PORT VE SERİ ÇİZİCİ EKRANLARININ KULLANIMI** ###
#### Projede seri port ekranının, seri çizici ekranının ve ilgili komutların kullanımı hedeflenmiştir. ####
#### Bu projede Arduino'nun ***Serial.begin(), Serial.println(), digitalRead(), pinMode(), digitalWrite() ve delay()*** komutları kullanılmıştır. ####
#### Dijital Giriş Çıkış pinlerinden biri olan 2. pin ***OUTPUT*** mod olarak konfigüre edilmiştir. ####
#### Bu projede 2 nolu pine bağlı olan ledin 0.5 sn aralıklarla yanıp sönmesi sağlanmıştır. ####
#### ***setup()*** içerisinde ***Serial.begin(9600)*** komutuyla seri haberleşme 9600 ***baud rate (veri iletişim hızı)*** ile başlatılmıştır. ####
#### ***Serial.println()*** komutunun içerisine seri port ve seri çizici ekranına yansıtılmak istenen değişken yazılmıştır. ####
#### Bu projede led bağlı olan 2 nolu pinin lojik durumunun incelenmesi istenmiştir. Dolayısıla ***Serial.println*** komutununa değişken olarak ***digitalRead(PIN_2)*** komutu girişmiştir. ####
#### ***digitalRead()*** komutu sayesinde ilgili pinin lojik durumu elde edilmiştir. ***Serial.println()*** komutuyla elde edilen lojik durum seri port ve seri çizici ekranına aktarılmıştır. ####
#### Bu projede elde edilen çıktılar eklenmiştir. ####
![3_proje](https://github.com/user-attachments/assets/1411d22e-48cd-4b37-b278-c81b2ec54951)

### **PROJE 4 : LEDİN BUTON İLE KONTROLÜ 1** ###
#### Projede pull-up dirençle bağlanmış olan butonun basılma durumunda ledin yanması, basılmama durumunda ise ledin sönmesi hedeflenmiştir. ####
#### Bu projede Arduino'nun ***Serial.begin(), Serial.println(), pinMode(), digitalWrite() ve digitalRead()*** komutları kullanılmıştır. ####
#### Dijital Giriş-Çıkış pinlerinden olan 2. pin ***INPUT_PULLUP*** olarak konfigüre edilmiştir. Bu pinle butondan gelen lojik seviyeler okunacak ve lojik duruma göre led yanıp sönecektir. ####
#### Dijital Giriş-Çıkış pinlerinden olan 12. pin ***OUTPUT*** olarak konfigüre edilmiştir. 12. pine bağlı olan led ve direnç butonun lojik durumuna göre yanıp sönecektir. ####
#### Projede kullanılan buton pull-up direnciyle bağlanmıştır. Dolayısıyla butona basılma durumunda 2. pine 0V gerilim düşümü olmaktadır. 0V gerilim düşümünün lojik seviyesi sıfırdır. Butona basıldığında ledin yanması planlanmıştır. Amaca uygun olması için if-else sorgularında lojik seviye 0 olduğu zaman 12. pin HIGH durumuna çekilmiştir ve led yanmıştır. Böylelikle butona basılma durumunda led yanmaktadır. Butona basılmama durumunda 2. pine 5V gerilim düşümü olacaktır. 5V gerilim düşümünün lojik seviyesi birdir. Butona basılmadığında ledin sönmesi planlanmıştır. Amaca uygun olması için if-else sorgularında lojik seviye 1 olduğu zaman 12. pin LOW durumuna çekilmiştir ve led sönmüştür. ####
#### Proje 4'ün Proteus'ta oluşturulan devresi eklenmiştir. ####
![4_proje](https://github.com/user-attachments/assets/b118e2f7-ab21-4591-8182-c4cf26d3b995)
#### _Projede yer alan pull-up direnci pinin alabileceği maksimum akım değerine (*20mA*) göre belirlenmiştir. Böylelikle olası hasarlar engellenmiştir._
