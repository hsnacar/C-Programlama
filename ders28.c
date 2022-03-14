#include <stdio.h>
int main(void)
{
    int rakamlar[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("%d \n", 0[rakamlar]);
    printf("%d \n", 1[rakamlar]);
    printf("%d \n", 2[rakamlar]);
    printf("%d \n", 3[rakamlar]);
    printf("%d \n", 4[rakamlar]);

    printf("Aşağıdaki ifadelerin hepsi aynı veriyi ekrana basıyor. \n");
    printf("%d \n", rakamlar[3]);
    printf("%d \n", 3[rakamlar]);
    printf("%d \n", *(rakamlar + 3));
    printf("%d \n", *(3 + rakamlar));

    return 0;
}


/*

Bu derste array elemanlarına erişimin bir başka yolunu daha örneklendirmek istedim.

Normalde bir array'ın elemanlarına rakamlar[4] vb şekilde erişiriz. Mesela ders21'de dizi[0] diye göstermiştik.

Bu dersimizde de arrayAdi[x]'in aynı zamanda x[arrayAdi] olduğunu onun da *(arrayAdi + x) olduğunu söylüyoruz!

ders21'de arrayAdi[x] kullanımını
ders27'de *(arrayAdi + x) kullanımını örneklendirerek bunların aynı anlama geldiğini anlatmıştık.
Bu dersimizde de x[arrayAdi] kullanımının da diğerleriyle aynı olduğunu gösteriyoruz.

arrayAdi[x] ile x[arrayAdi]'nin birbirine eşit olması durumunun geldiği yer şudur:

*(arrayAdi + x) ile *(x + arrayAdi) aynı manaya gelmektedir. (x int türündedir)
Bunun sebebi parantez içinde bir int (integer) yani tam sayi bir de pointer değişken (sıraya bakılmaksızın) şartı aranıyor.
Derleyici hangi sırada olduğuna bakmadan pointer değişken adını alıp tam sayı ile beraber işleme koyuyor.
Dolayısıyla x[a] ile a[x] aynı manaya geliyor. 
*(x + a) ve *(a + x) ile beraber aşağıdaki dört ifade de ekrana aynı veriyi yazar:

printf("%d \n", rakamlar[3]);
printf("%d \n", 3[rakamlar]);
printf("%d \n", *(rakamlar + 3));
printf("%d \n", *(3 + rakamlar));

*/

/*
Programın çıktısı:
------------------

0 
1 
2 
3 
4 
Aşağıdaki ifadelerin hepsi aynı veriyi ekrana basıyor. 
3 
3 
3 
3 

*/