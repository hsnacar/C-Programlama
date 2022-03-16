#include<stdio.h>
#include<string.h>

typedef struct renk {
    char renkAdi[20];
    int renkKodu;
} renkler;

int main(void){

    char sampiyon[12] = { "GALATASARAY" };

    renkler sari;
    strcpy(sari.renkAdi, "sarı");
    sari.renkKodu = 33;

    renkler kirmizi;
    strcpy(kirmizi.renkAdi, "kırmızı");
    kirmizi.renkKodu = 31;

    renkler beyaz;
    strcpy(beyaz.renkAdi, "beyaz");
    beyaz.renkKodu = 37;

    int indeks = 0;
    while(sampiyon[indeks] != '\0'){
        if((indeks % 2) == 0){
            printf("\033[0;%dm", sari.renkKodu);
        } else {
            printf("\033[0;%dm", kirmizi.renkKodu);
        }
        printf("%c", sampiyon[indeks]);
        indeks++;
    }
    printf("\033[0;%dm\n", beyaz.renkKodu);
    return 0;

}

/*

Bu dersimizde struct ile typedef'in beraber kullanımı örneklendirdim.
ders34.c'de struct'ları ders31.c'de typedef'i incelemiştik.
4. satırda struct deklare ederken typedef anahtar kelimesini kullandık.
Bu sayede renk yapısına renkler diye direkt bir kullanım mümkün olabildi.
"struct renk sari;" şeklinde bir ifade yerine "renkler sari;" yazarak değişkeni veri atamaya hazır hale getirebiliyoruz.

Bu dersimizde printf ile beyaz dışında başka renkte yazıları ekrana basmayı da görmüş olduk.
Terminal ekranında ekrana basılanların görsel özelliklerini çok fazla değiştiremiyoruz.
Renk kodlarının değişen kısımlarını renkKodu tamsayı değişkenine ayırdık. 

Örneğimizde daha önce incelediğimiz fonksiyonları yeniden örneklendirebilmek için işlemleri uzun yoldan yaptık. 
Normalde bir harfi sarı bir harfi kırmızı bir yazı yazmak bu kadar uzun bir kodla yapılmaz.

Not: Aşağıdaki renk kodlarını printf("\033[0;31m"); şeklinde kullanabilirsiniz.

    Siyah \033[0;30m

    Kırmızı \033[0;31m

    Yeşil \033[0;32m

    Sarı \033[0;33m

    Mavi \033[0;34m

    Mor \033[0;35m

    Camgöbeği \033[0;36m

    Beyaz \033[0;37m

*/



/*
Programın çıktısı: (bir harf sarı bir harf kırmızı renkte)
------------------

GALATASARAY

*/
