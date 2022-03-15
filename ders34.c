#include<stdio.h>
#include<string.h>

struct kargoBilgileri
{
    int kargoNo;
    char gonderen[30];
    char alici[30];
    char gonderenTel[15];
    char aliciTel[15];
    float kargoAgirligi;
};

int main(void){

    struct kargoBilgileri kargo;

    kargo.kargoNo = 10123;
    // kargo.gonderen = "Yasin"; Bu şekilde atama yapamıyoruz
    strcpy(kargo.gonderen, "Yasin");
    strcpy(kargo.alici, "Süleyman");
    strcpy(kargo.aliciTel, "+905001234567");
    strcpy(kargo.gonderenTel, "+905009876543");
    kargo.kargoAgirligi = 2.75;

    printf(
        "\n Kargo No: %d"
        "\n Kargoyu Gönderen: %s"
        "\n Kargo Gönderici Telefon: %s"
        "\n Kargo Alıcısı: %s"
        "\n Kargo Alıcı Telefon: %s"
        "\n Kargo Paket Ağırlığı: %fkg \n",
        kargo.kargoNo,
        kargo.gonderen,
        kargo.gonderenTel,
        kargo.alici,
        kargo.aliciTel,
        kargo.kargoAgirligi
    );

    return 0;

}

/*

ders32.c'de C dilinde string veri türünün bulunmadığını bunun yerine char array kullanıldığını söylemiştik.
Pekçok programlama dilinde "string degiskenAdi = 'Karakterler'" şeklinde değişken tanımlama ve değer atama vardır.
    C dilinde karakter katarları array yani dizi olarak kabul edildiği için
    atama işlemi string.h kütüphanesinin strcpy() fonksiyonu ile yapılıyor.
Bu sebeple include ile string.h kütüphanesini en başta programımıza dahil ettik.
    strcpy(degiskenAdi, "karakter katarı") şeklinde kullanılıyor.

Gelelim bu dersin asıl konusu olan struct yani "yapı"lara.

Struct yani yapılar bir isim altında birden fazla veri türü içeren değişkenleri biraraya getirmek için kullanılır.
Mesela int char float gibi değişik türlerdeki değişkenleri tek bir array içinde şu şekilde tanımlayamıyoruz: dizi[] = { "elma", 5, 1.7, "armut" }
Bunun yerine struct yani yapıları kullanıyoruz.

Öncelikle 4. satırdan 12'ye kadarki bölümde gördüğünüz gibi değer ataması olmadan yapıyı declare etmeliyiz. Bu deklarasyon hafızada veri türlerine göre alan ayrılmasına yol açmaz. 
Daha sonra 16. satırdaki gibi bu yapıdan bir değişkenle veri koleksiyonumuzu oluşturuyoruz. Bu aşamada hafızada alan tahsis edilir.
kargo değişkeni kargoBilgileri yapısında bir veri koleksiyonu özelliği gösteriyor.
Alt verileri ulaşmak için nokta kullanılıyor.
Mesela kargo.kargoNo şeklinde kargo veri koleksiyonunun int türündeki kargoNo değişkenine erişmiş oluyoruz.

18. satırda kargo.kargoNo = 10123; atamasıyla hafızada tahsis edilen alana veriyi depolamış oluyoruz.

Atadığımız verileri printf ile ekrana basarken veri türüne göre %d %s %f kullanımlarına dikkat ediniz.

Not: Bir struct deklarasyonu yaparken değişkeni de aynı yerde deklare edebiliriz. 
Yukarıdaki örneğin 16. satırını silerek şu şekilde deneyin:

struct kargoBilgileri
{
    int kargoNo;
    char gonderen[30];
    char alici[30];
    char gonderenTel[15];
    char aliciTel[15];
    float kargoAgirligi;
} kargo;

kargo değişkenini yapının sonuna ekleyerek deklare ettik.

*/

/*
Programın çıktısı:
------------------

 Kargo No: 10123
 Kargoyu Gönderen: Yasin
 Kargo Gönderici Telefon: +905009876543
 Kargo Alıcısı: Süleyman
 Kargo Alıcı Telefon: +905001234567
 Kargo Paket Ağırlığı: 2.750000kg 

*/