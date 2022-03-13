#include<stdio.h>

int main(void){

    int dizi[] = { 10, 20, 30, 40, 50 };    
    int* diziAdres = NULL;

    diziAdres = dizi;

    printf("ilk eleman = %d \n", *diziAdres);
    printf("ikinci eleman = %d \n", *(diziAdres + 1));
    printf("üçüncü eleman = %d \n", *(diziAdres + 2));
    printf("dördüncü eleman = %d \n", *(diziAdres + 3));
    printf("son eleman = %d \n", *(diziAdres + 4));
    


    return 0;
}

/*

Bu dersimizde pointer ile array'in elemanlarına nasıl erişildiğini örneklendirdik.

8. satırdaki atamayla diziAdres pointerini dizi array'ına eşitledik. 
    diziAdres bir pointer değişken olduğu için dizi'ye değil dizi'nin başlangıç adresine eşitlendi!
Artık dizi değişken adını kullanmadan array'ın elemanlarına erişebiliriz.
10 ve 14 satırlar arasında array elemanlarını değişken adı kullanmadan pointer ile ekrana basabildik.

Bir önceki derste ++ ile array elemanlarından bir diğerine geçmeyi göstermiştik. 
Burada *(diziAdres +1) kullanımına dikkatinizi çekmek istiyorum. +1 ile ++ aynı anlama gelmektedir.

*/

/*
Programın çıktısı:
------------------

ilk eleman = 10 
ikinci eleman = 20 
üçüncü eleman = 30 
dördüncü eleman = 40 
son eleman = 50 

*/