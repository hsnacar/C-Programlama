#include<stdio.h>
int main(void){

    int sayi = 1, toplam = 0;

    tekrarla:

    toplam += sayi;
    sayi++;

    if(sayi <= 100){
        goto tekrarla;
    } else {
        goto bitir;
    }

    bitir:

    printf("1'den 100'e kadarki sayıların toplamı: %d\n", toplam);
    return 0;
}

/*

Bu dersimizde goto deyimini ele alıyoruz.
goto, programcılar tarafından çok gerekli değilse kullanılmak istenmeyen bir deyimdir.
Örnek programımızda "tekrarla" (6. satır) ve "bitir" (17. satır) ismiyle iki gidilebilecek yer oluşturduk.
if deyimi ile kontrol edilen şart sağlanana kadar "goto tekrarla" ile programı 12.'i satırdan 6. satıra geri döndürdük.
sayi değişkeni 100 olunca "goto bitir" komutu çalıştı ve program akışı 17. satıra atlatıldı.

*/

/*
Programın çıktısı:
------------------

1'den 100'e kadarki sayıların toplamı: 5050

*/