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
