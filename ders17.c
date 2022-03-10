#include <stdio.h>

void unutma() {
    static int kacKere = 0;
    kacKere++;
    printf("Bu fonksiyon %d. defa çağrıldı\n", kacKere);
}

int main(void) {

    int dongu = 1;
    for(dongu = 1; dongu < 10; dongu++){
        unutma();
    }

    return 0;
}

/*

Bu dersimiz static deyimiyle ilgili.

4. satırda: int türünde tanımlanan kacKere değişkenine static özelliği verdik.
        Eğer static özelliği vermeseydik,
        unutma() fonksiyonu her çağrıldığında kacKere = 0 tanımlaması çalışacaktı.
        Ancak static özelliği verdikten sonra,
        kacKere değişkeni üzerinde yapılan işlemler hafızada tutuluyor ve
        4. satırdaki sıfıra eşitleme işlemi görmezden geliniyor.

12. satırdaki for döngüsü unutma() fonksiyonunun 9 defa çağrılması için oluşturuldu.
            
*/

/*
Programın çıktısı:
------------------

Bu fonksiyon 1. defa çağrıldı
Bu fonksiyon 2. defa çağrıldı
Bu fonksiyon 3. defa çağrıldı
Bu fonksiyon 4. defa çağrıldı
Bu fonksiyon 5. defa çağrıldı
Bu fonksiyon 6. defa çağrıldı
Bu fonksiyon 7. defa çağrıldı
Bu fonksiyon 8. defa çağrıldı
Bu fonksiyon 9. defa çağrıldı

*/

/*
static deyimini silerek çalıştırırsanız programın çıktısı:
------------------

Bu fonksiyon 1. defa çağrıldı
Bu fonksiyon 1. defa çağrıldı
Bu fonksiyon 1. defa çağrıldı
Bu fonksiyon 1. defa çağrıldı
Bu fonksiyon 1. defa çağrıldı
Bu fonksiyon 1. defa çağrıldı
Bu fonksiyon 1. defa çağrıldı
Bu fonksiyon 1. defa çağrıldı
Bu fonksiyon 1. defa çağrıldı

*/