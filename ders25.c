#include<stdio.h>

int main(void){

    int dizi[] = { 10, 20, 30, 40, 50 };    
    int* diziAdres;

    diziAdres = &dizi[3];
    printf("%d \n", *diziAdres);

    diziAdres++;
    printf("%d \n", *diziAdres);

    diziAdres--;
    diziAdres--;
    printf("%d \n", *diziAdres);

    return 0;
}

/*

Bu dersimizde pointer değişkenin bir artırılmasını/eksiltmesini ele aldım.
Daha önce ++ operatörünün kullanımını görmüştük.
sayi++ 'nın "sayi = sayi + 1" anlamına geldiğini,
sayi--'nin ise "sayi = sayi - 1" olduğunu söylemiştik.
Eğer sayi'nin değeri 10 ise sayi++ komutu onu 11 yapıyordu.
pointer değişkenlerde ++ veya -- operatörünün kullanım sonuçları,
    tanımlamadaki veri türüne göre değişiyor. 

Kodumuzu inceleyip olan bitene bakalım:
5. satırda beş elemanlı int türünde bir dizi tanımladık.
6. satırda int* diziAdres ile bir pointer değişken tanımladık.
8. satırda diziAdres pointer değişkenine dizi değişkeninin 3 nolu indeksindeki verinin adresini atıyoruz. *diziAdres diye ekrana basarsak dizi[3]'ü ekrana basmış oluruz.
11. satırda diziAdres++ yapıldığında adres numarasında 1 değil 4 artış meydana gelir. Bunun sebebi int'in hafızada işgal ettiği ünitesi sayısı kadar (4byte = 4 hafıza ünitesi) artış yapılır. 
12. satırda diziAdres'in gösterdiği adresteki veriyi yazmak için *diziAdres şeklinde kullanılmıştır. Ekran çıktısı 50'dir.40'dan 50'ye bir dizi elemanı kadar ilerlenmiştir.

14. ve 15. satırda iki kere diziAdres-- yazılarak, iki dizi elemanı kadar geriye gidilmiştir, adres olarak 8 adım geriye gidilmiş oluyor.

16. satırda 50'den iki adım geriye gidildiği için ekran çıktısı 30 olacaktır.

Not: int 4byte'lık bir alan kaplar ifadesi işlemciden işlemciye veya 32bit 64bit mimarilere göre değişkenlik gösterebilir.
*/

/*
Programın çıktısı:
------------------

40 
50 
30 

*/