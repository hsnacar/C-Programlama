#include<stdio.h>
int main (void) {
    int* bellek = NULL; // int *bellek = NULL; ifadesi de aynı anlamdadır
    printf("bellek'in kendi hafıza ünitesi adresi: %p\n", &bellek);
    return 0; 
}


/*

Bu dersimizde int float gibi bir veri türü olan pointer (işaretçi/gösterici) değişkenlerini ele alıyoruz.

Ancak pointer değişkenlerini anlamak için bir ön bilgiyi buraya yazmamız gerekli.
int a = 5; şeklinde bir değişken tanımladığımızda hafızada bir alan bu bilgiyi tutmak için ayrılır.
Diyelim ki hafızadaki 201-202-203-204 nolu alanlar "a" değişkeninin 5 değerini tutmak için ayrıldı.
Değişken tanımlarken veri türünün (int, float vb.) belirtilme zorunluluğu hafızada hazırlanacak alanın boyutuna karar verilebilmesi içindir.
Kapasitesi sınırlı olan kaynakları tam verimle kullanabilmek bazı kuralların olmasını zorunlu kılıyor.
Konuya geri dönersek a değişkeninin 5 olan değeri 201-202-203-204 nolu alanlarda tutuluyordu.
Daha önce 8. derste & (ampersand) işaretiyle değişkenin adresini ekrana yazdırmıştık.
İşte a değişkeninin &a ifadesiyle adresine baktığımızda 201'i yani a'ya ayrılan hafıza ünitelerinin başlangıç adresini görürüz.

Şimdi örnek kodumuza bakalım:
3. satırda "int bellek" yazmak yerine "int* bellek" yazdık. Burada yıldız işareti dikkatinizi çekmiştir.
"int* bellek" ifadesi pointer değişken tanımlıyorum demektir. (Tanımlama int *degiskenAdi; şeklinde de yapılabilir)
Yukarıdaki programda "bellek" pointer değişkenine bir değer ataması yapmadık. Sadece "int* bellek" pointer'in adını tanımlamadık. Yani henüz değişken herhangi bir bilgi depolamıyor.
Ancak 4. satırda printf ile &bellek şeklinde pointer'ın kendi adresini ekrana bastığımızda 0x7ff7ba9637b0 gibi bir adres no görüyoruz.
Bunun sebebi "int* bellek" gibi bir pointer değişken oluşturulduğunda hafızada bir adres tutacak kadar yer ayrılır. Bu yerin adresi pointer değişkenimizin kendi adresidir.
Pointer değişkenin depolayacağı adres örneğimizde yazılmadığı için henüz printf("%p", bellek) şeklinde ekrana yazdırılmak istendiğinde bir adres numarası ekranda görünmeyecektir.
(Pointer değişkenler printf içinde %p karakter formatı ile kullanılıyor.)

Not: Bu ders, ders19 için bir hazırlıktır.
Not 2: pointer tanımlandığında herhangi bir adrese henüz işaret etmediği için NULL'a yani tanımsızlık durumuna ayarlanmalı. 
Bu sayede herhangi bir adres karışıklığı vs yaşanmasının önüne geçilmiş olur.


*/

/*
Programın çıktısı:
------------------

bellek'in kendi hafıza ünitesi adresi: 0x7ff7ba9637b0

*/