#include<stdio.h>

union tekDepo {
    char isim[30];
    int yas;
    float boyMetre;
} tekDepoBoyut;

struct cokDepo {
    char isim[29];
    int yas;
    float boyMetre;
} cokDepoBoyut;

int main(void){

    printf("Union boyutu: %d byte \n", sizeof(tekDepoBoyut));
    printf("Struct boyutu: %d byte \n", sizeof(cokDepoBoyut));

    return 0;
}

/*

sizeof() hafızada ne kadar bir alan tahsis edildiğini öğrenmek için kullandığımız bir fonksiyondur.

union ile struct kodlarına baktığımızda anahtar kelimeler hariç tamamen aynı kullanımı görüyoruz.

İkisinin farkı hafızada tahsis edilen alanla ilgilidir.

Struct'ta yapının içindeki tüm değişkenlerin toplamı kadar hafızada alan tahsis edilirken,
union'da içteki elemanlardan en çok yer kaplayan kadar alan tahsis edilir.

Örneğimizde struct'da char 32 byte + int 4 byte + float 4 byte toplam 40 byte alan ayrıldı.
union'da ise en çok yer kaplayan char kadar yani 32 byte yer ayrıldı. Bunun sebebi şu:
Struct içindeki elemanlara atama yapıldığında her birine ayrı ayrı erişim sağlayabiliyoruz.
Union'da ise içteki elemanlardan sadece birine erişim yapılabiliyor.

Mesela tekDepoBoyut.yas = 11; dediğimizde diğerlerinde depolanan veriler kaybolur.
Eğer tekDepoBoyut.boyMetre = 1.7 dersek üstteki yas verisi silinir hafızada sadece boyMetre tutulur. 

*/

/*
Programın çıktısı:
------------------

Union boyutu: 32 byte
Struct boyutu: 40 byte

*/