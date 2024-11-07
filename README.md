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
