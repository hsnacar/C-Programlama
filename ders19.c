#include<stdio.h>
int main (void) {
    int* bellek = NULL; 
    int rakam = 5;
    printf("rakam'ın hafıza adresi: %p \n", &rakam);
    printf("bellek'in hafıza adresi: %p \n", &bellek);
    bellek = &rakam;
    printf("rakam'ın adresi bellek'e aktarıldıktan sonra \nbellek'in işaret ettiği/gösterdiği hafıza adresi: %p \n", bellek);
    return 0; 
}

/*

Bu dersimizde bir değişkenin hafızada depolandığı ünite adresini pointer değişkende tutmayı örneklendirdik.

int rakam = 5 tanımlamasıyla hafızada "5" verisini depolayan bir ünite ayırmış olduk.
bellek bir pointer değişken olduğu için hafıza ünitelerinin adreslerini depolamakta kullanılır.
rakam'ın hafıza adresine "&rakam" şeklinde ulaştığımızı hatırlatalım.
7. satırda bellek pointer değişkenine (adres depolanan değişkene) rakam değişkeninin hafızadaki adresini atadık.
Artık &rakam ve bellek aynı veri kümesini gösteriyor yani 5'i. 
Bu şu anlama geliyor, "5"i depolayan hafıza ünitesine ulaşım için elimizde iki tane araç var.
Bunun ne işe yarayacağı diğer dersteki örneğimizde.

*/

/*
Programın çıktısı:
------------------

rakam'ın hafıza adresi: 0x7ff7b64277ac 
bellek'in hafıza adresi: 0x7ff7b64277b0 
rakam'ın adresi bellek'e aktarıldıktan sonra 
bellek'in işaret ettiği gösterdiği hafıza adresi: 0x7ff7b64277ac 

*/