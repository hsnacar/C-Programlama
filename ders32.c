#include<stdio.h>

int main(void){

    char isim[20] = "Elif Zehra";

    printf("Benim adım %s \n", isim);

    return 0;

}

/*

C programlama dilinde string diye bir veri türü yoktur. Eğer başka dillerle ilgilendiyseniz bu size biraz garip gelebilir.

C dilinde string yerine karakter dizileri (array'leri) vardır. 

5. satırda, "Elif Zehra" şeklindeki ifade char veri türünde tanımlanmış bir array'dir. (dizidir)
            bu tanımlamada 20, karakter dizisinin hafızada depolanacak maksimum uzunluğudur.

7. satırda, char veri türündeki isim dizisini ekrana basarken %s kullanımına dikkat ediniz.

     Derleyici array'in bittiği yeri işaretlemek için son elemanı \0 'a eşitler.
     Yani "Elif Zehra\0" şeklinde hafıza depolanır. Bu sebeple son elemanı boş bırakmak gerekir.
     Eğer depolanacak veri 20 karakterse diziyi 21 olarak tanımlayıp son elemanı derleyici için boş bırakmak gereklidir.

*/

/*
Programın çıktısı:
------------------

Benim adım Elif Zehra

*/