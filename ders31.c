#include<stdio.h>

typedef int tamsayi;

int main(void){

    tamsayi sene;

    sene = 2022;

    printf("%d yılındayız.", sene);

    return 0;

}

/*

typedef bir veri türü için yeni bir isim kullanmamızı sağlar.

Programımızın 3. satırında int yerine tamsayi ifadesini kullanacağımızı söyledik.

7. satırda, "int sene;" ifadesi yerine "tamsayi sene;" kullandık. Çünkü artık int yerine tamsayi diyebiliyoruz.

9. satırda, sene değişkenine 2022 sayısını atadık.

11. satırda ekrana sene değişkenin bastık.

Not: int yerine ikinci bir yeni isimlendirme yapsaydık, önceki isimlendirme iptal olmaz ikisi de kullanılabilirdi.

*/

/*
Programın çıktısı:
------------------

2022 yılındayız.

*/