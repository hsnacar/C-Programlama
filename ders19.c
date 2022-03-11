#include<stdio.h>
int main (void) {
    int* bellek; 
    int rakam = 5;
    printf("rakam'ın hafıza adresi: %u \n", &rakam);
    printf("bellek'in hafıza adresi: %u \n", bellek);
    bellek = &rakam;
    printf("rakam'ın adresi bellek'e aktarıldıktan sonra \nbellek'in yeni hafıza adresi: %u \n", bellek);
    return 0; 
}

/*

Bu dersimizde bir değişkenin bellek adresini başka bir pointer değişkene atamayı örneklendirdik.

int rakam = 5 tanımlamasıyla hafıza "5" verisini depolayan bir alanı ayırmış olduk.
bellek bir pointer değişken olduğu için hafıza adreslerini depolamakta kullanılır.
rakam'ın hafıza adresine "&rakam" şeklinde ulaştığımızı hatırlatalım.
7. satırda bellek pointer değişkenine (adres depolanan değişken) rakam değişkeninin hafızadaki adresini atadık.
Artık &rakam ve bellek aynı veri kümesini gösteriyor yani 5'i. 
Bu şu anlama geliyor, "5"i depolayan hafıza kümesine ulaşım için elimizde iki tane araç var.
Bunun ne işe yarayacağı diğer dersteki örneğimizde.

*/