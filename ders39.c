#include <stdio.h>

enum hayat {
   bebeklik,
   cocukluk,
   genclik,
   yetiskinlik,
   yaslilik
};

typedef enum hayat hayatEvreleri;

int main(void)
{
    hayatEvreleri yusuf = cocukluk;

    switch(yusuf){
        case bebeklik:
        printf("Yusuf hayatının bebeklik evresinde. \n");
        break;

        case cocukluk:
        printf("Yusuf hayatının çocukluk evresinde. \n");
        break;

        case genclik:
        printf("Yusuf hayatının gençlik evresinde. \n");
        break;

        case yetiskinlik:
        printf("Yusuf hayatının yetişkinlik evresinde. \n");
        break;

        case yaslilik:
        printf("Yusuf hayatının yaşlılık evresinde. \n");
        break;
        
        default:
        printf("Yusuf hayatının hangi evresinde bilinmiyor. \n");
    }
    return 0;
}

/*

Bu derste enum kullanımını örnekledim.
enum kendi veri türümüzü tanımlamak için kullanılır.
C dilinde int, float, char gibi veri türleri öntanımlı olarak bulunmaktadır.
Enum ile aynı bunlar gibi kendi veri türümüzü yaratıp alabileceği değerleri sınırlayıp, oluşturduğumuz veri türünden değişken tanımlayabiliyoruz.

Yukarıdaki örneğimizde hayat isimli bir veri türü tanımladık ve alabileceği beş ayrı değeri sıraladık.

11. satırda typedef ile oluşturduğumuz veri türünü kullanırken her seferinde "enum hayat" yazmamak için hayatEvreleri diye veri türümüze yeni bir isim atadık.
15. satırda hayatEvreleri veri türünde yusuf diye bir değişken tanımladık ve alabileceği değerlerden "cocukluk"u seçtik.

17. satırda başlayan switch ile yusuf değişkeninin verisini kontrol edip eşleşme durumunda gerekli ibareyi ekrana bastık.

*/

/*
Programın çıktısı:
------------------

Yusuf hayatının çocukluk evresinde. 

*/