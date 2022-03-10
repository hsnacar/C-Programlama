#include<stdio.h>

int toplamHesapla(int a, int b);

int main(void){
    int x = 5, y = 10;
    printf("x = %d, y = %d olmak üzere, x + y = %d", x, y, toplamHesapla(x,y));
    return 0;
}

int toplamHesapla(int a, int b) {
    return (a + b);
}

/*

ders05.c'de fonksiyonların tanımlanmasını ve çağrılmasını örneklendirip izah etmiştik.
O dersin açıklamasında fonksiyonların kullanılmadan önce tanımlanması gerektiğini söylemiştik.
Bu dersimizde hazırladığımız fonksiyonların main'den sonra nasıl tanımlandığını gösteriyoruz.
Eğer fonksiyonu main'den sonraya koymak isterseniz 
    fonksiyonun prototipini main'den önceye koyarak işlev gövdesini main'den sonra tanımlayabilirsiniz.
    Örnek kodumuzda 3. satırda toplamHesapla fonksiyonunun prototipi tanımlanmıştır.
    3. satırda int fonksiyonun geri dönüş veri türünü
               toplamHesapla fonksiyonun adını
               int a ve int b ise fonksiyonun çalışmak için ihtiyaç duyduğu değişkenleri ve veri türlerini anlatmaktadır.


*/

/*
Programın çıktısı:
------------------

x = 5, y = 10 olmak üzere, x + y = 15
*/