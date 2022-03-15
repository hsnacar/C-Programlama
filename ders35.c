#include<stdio.h>
#include<string.h>

struct ogrenciAileBilgileri {
    char anneAdi[20];
    char babaAdi[20];
    char anneMeslek[50];
    char babaMeslek[50];
    char anneTelefon[15];
    char babaTelefon[15];
    int kardesSayisi;
};

struct ogrenci {
    struct ogrenciAileBilgileri aile;
    char ogrenciAdi[20];
    char ogrenciSoyadi[20];
    int ogrenciNo;
} yeniKayit;

int main(void){

    strcpy(yeniKayit.ogrenciAdi, "Murat");
    strcpy(yeniKayit.ogrenciSoyadi, "Yıldırım");
    yeniKayit.ogrenciNo = 1348;
    strcpy(yeniKayit.aile.babaAdi, "Ahmet");
    yeniKayit.aile.kardesSayisi = 3;

    printf(
        "Okula yeni kaydolan öğrencinin,\n"
        "Adı: %s \n"
        "Soyadı: %s \n"
        "Numarası: %d \n"
        "Baba Adı: %s \n"
        "Kardeş Sayısı: %d \n",
        yeniKayit.ogrenciAdi,
        yeniKayit.ogrenciSoyadi,
        yeniKayit.ogrenciNo,
        yeniKayit.aile.babaAdi,
        yeniKayit.aile.kardesSayisi
    );


    return 0;

}

/*

Bu derste struct'ların iç içe kullanımını örneklendirdim.
Önceki derste oluşturduğumuz yapıdan farklı olarak 15. satır dikkatinizi çekmiştir.
struct ogrenciAileBilgileri aile; ifadesiyle başka bir struct yani yapıyı ogrenci struct'ının içine dahil ettik.
İç içe yapıların deklarasyonu böyle olurken veri atamasında yeniKayit.aile.babaAdi şeklindeki kullanıma dikkat ediniz.
Struct'ın içindeki diğer struct'a ulaşmak için ikinci defa nokta işaretini kullanıyoruz.

*/

/*
Programın çıktısı:
------------------

Okula yeni kaydolan öğrencinin,
Adı: Murat 
Soyadı: Yıldırım 
Numarası: 1348 
Baba Adı: Ahmet 
Kardeş Sayısı: 3 

*/