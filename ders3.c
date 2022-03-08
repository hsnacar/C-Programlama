#include<stdio.h>
int main (void) {

    int ilkSayi = 10;
    int ikinciSayi = 20, ucuncuSayi = 30, toplam;
    
    // (+) Toplama aritmetik operatörü 
    toplam = ilkSayi + ikinciSayi;
    printf("%d ile  %d toplanırsa sonuç %d olur.\n", ilkSayi, ikinciSayi, toplam);
    
    // (-) Çıkarma aritmetik operatörü 
    toplam = ucuncuSayi - ikinciSayi;
    printf("%d sayısından %d çıkarılırsa sonuç %d olur.\n", ucuncuSayi, ikinciSayi, toplam);

    // (*) Çarpma aritmetik operatörü 
    toplam = ucuncuSayi * ilkSayi;
    printf("%d sayısıyla %d çarpılırsa sonuç %d olur.\n", ucuncuSayi, ilkSayi, toplam);

    // (/) Bölme aritmetik operatörü 
    toplam = ikinciSayi / ilkSayi;
    printf("%d sayısı %d sayısına bölünürse sonuç %d olur.\n", ikinciSayi, ilkSayi, toplam);

    // (%) Mod alma veya kalan bulma aritmetik operatörü 
    toplam = ikinciSayi % ilkSayi;
    printf("%d sayısı %d sayısına bölümünden kalan %d olur.\n", ikinciSayi, ilkSayi, toplam);

    // (++) bir artırma operatörü 
    ilkSayi++;
    printf("ilkSayi++ kullanımı sonrası değişkenin değeri %d olmuştur\n", ilkSayi);

    ikinciSayi--;
    printf("ikinciSayi-- kullanımı sonrası değişkenin değeri %d olmuştur\n", ikinciSayi);

    return 0;
}

/*
Daha önceki derslerde şunlardan kısaca bahsetmiştik: 
     include, stdio.h, int, main, void, printf, %d, \n
Bu sebeple önceden ele almadığımız yerlere değinelim.

5. satır: burada aynı satırda birden fazla değişken tanımlamayı görüyoruz. 
          Ayrıca "toplam" değişkenine ilk değer ataması yapılmamıştır.

28. satır: ++ operatörü örneğindeki ilkSayi++; ifadesi şunun kısa yazımıdır: ilkSayi = ilkSayi + 1;
31. satır: -- operatörü örneğindeki ikinciSayi--; ifadesi şunun kısa yazımıdır: ikinciSayi = ikinciSayi - 1;

*/