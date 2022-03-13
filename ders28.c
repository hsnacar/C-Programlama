#include <stdio.h>
int main(void)
{
    int rakamlar[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("%d \n", 0[rakamlar]);
    printf("%d \n", 1[rakamlar]);
    printf("%d \n", 2[rakamlar]);
    printf("%d \n", 3[rakamlar]);
    printf("%d \n", 4[rakamlar]);

    return 0;
}


/*

Bu derste array elemanlarına erişimin bir başka yolunu daha örneklendirmek istedim.

Normalde bir array'ın elemanlarına rakamlar[4] vb şekilde erişiriz. Mesela ders21'de dizi[0] diye göstermiştik.

Bu dersimizde de arrayAdi[x]'in aynı zamanda x[arrayAdi] olduğunu onun da *(arrayAdi + x) olduğunu söylüyoruz!

ders21'de arrayAdi[x] kullanımını
ders27'de *(arrayAdi + x) kullanımını örneklendirerek bunların aynı anlama geldiğini anlatmıştık.
Bu dersimizde de x[arrayAdi] kullanımının da diğerleriyle aynı olduğunu gösteriyoruz.

Aslında mesele şu:

veri bir tane olmasına karşın verinin adresine işaret edenler ise birden fazla olabiliyor! 
(Bunun tersi mümkün değil yalnız. İki veriyi gösteren bir adet pointer yani gösterici olmaz)


*/

/*
Programın çıktısı:
------------------

0 
1 
2 
3 
4 

*/