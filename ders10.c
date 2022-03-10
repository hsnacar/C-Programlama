#include<stdio.h>
int main (void) {

   int secilen;

   printf(
       "\t1. Kopyala\n"
       "\t2. Kes\n"
       "\t3. Yapıştır\n"
       "\t4. Kaydet\n"
       "\t5. Tamamını seç\n"
       "\tHangi işlemin kısayol tuşunu öğrenmek istiyorsunuz? "
       );

    scanf("%d", &secilen);

    switch(secilen)
    {
        case 1:
            printf("\t\nCTRL + C ile kopyalama işlemi yapabilirsiniz\n");
            break;

        case 2:
            printf("\t\nCTRL + X ile kesme işlemi yapabilirsiniz\n");
            break;

        case 3:
            printf("\t\nCTRL + V ile yapıştırma işlemi yapabilirsiniz\n");
            break;

        case 4:
            printf("\t\nCTRL + S ile kaydetme işlemi yapabilirsiniz\n");
            break;
        case 5:
            printf("\t\nCTRL + A ile tümünü seçme işlemi yapabilirsiniz\n");
            break;

        default:
            printf("\t\nHatalı seçim!\n");
    }

    return 0;
}

/*

Bu dersimizin konusu switch-case'dir. switch değişim, case durum anlamındadır.
if-else ile de aynı kontrolleri yaptırıp benzer sonuçlara ulaşabiliriz.
Ancak switch-case hem daha hızlı hem de kod karmaşası if-else göre daha azdır.
switch() ifadesinde parantez içine kontrol edilecek değişken yazılır.
case ise değişkenin değerinin kontrol edildiği adımdır.
case ifadesi break; ile sonlanır. 
case ile kontrol edilen durum sağlanırsa break'e kadarki kodlar çalıştırılır ve switch sonlandırılır diğer case'ler kontrol edilmez.
Eğer sıralanan tüm case'ler için eşleşme olmazsa default çalıştırılır ve switch sonlandırılır.

*/

/*
Programın çıktısı:
------------------

        1. Kopyala
        2. Kes
        3. Yapıştır
        4. Kaydet
        5. Tamamını seç
        Hangi işlemin kısayol tuşunu öğrenmek istiyorsunuz? 1

CTRL + C ile kopyalama işlemi yapabilirsiniz

*/