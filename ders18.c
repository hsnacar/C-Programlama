#include<stdio.h>
int main (void) {
    int* bellek; // int *bellek; ifadesi de aynı anlamdadır
    printf("bellek'in kendi hafıza ünitesi adresi: %u\n", &bellek);
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
3. satırda "int bellek" yazmak yerine "int* bellek" yazdık. Buradaki yıldız işareti dikkatinizi çekmiştir.
"int*" => pointer değişken tanımlıyorum demektir. (Tanımlama int *degiskenAdi; şeklinde de yapılabilir)
Yukarıdaki programda bellek pointer değişkenine bir değer ataması yapmadık. Sadece "int* bellek" şeklinde tanımlama yaptık.
Ancak 4. satırda printf ile &bellek şeklinde kendi adresini ekrana bastığımızda 901464352 gibi bir adres no görüyoruz.
Bunun sebebi "int* bellek" gibi bir pointer değişken oluşturulduğunda hafızada bir adres tutacak kadar yer ayrılır. Bu yerin adresi pointer değişkenimizin kendi adresidir.
Pointer değişkenin depolayacağı adres örneğimizde yazılmadığı için henüz printf("%u", bellek) şeklinde ekrana yazdırılmak istendiğinde bir adres numarası ekranda görünmeyecektir.
(Pointer değişkenler printf içinde, her zaman pozitif bir değer olduğu için, %d değil %u (unsigned) karakter formatı ile kullanılıyor.)

Not: Bu ders, ders19 için bir hazırlıktır.

*/

/*
Programın çıktısı:
------------------

bellek'in kendi hafıza ünitesi adresi: 901464352

*/