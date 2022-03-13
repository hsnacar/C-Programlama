#include <stdio.h>
int main(void)
{
    int rakamlar[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("%d \n", *rakamlar);
    printf("%d \n", *(rakamlar + 1));
    printf("%d \n", *(rakamlar + 2));
    printf("%d \n", *(rakamlar + 3));
    printf("%d \n", *(rakamlar + 4));

    return 0;
}

/*

Bu dersimizde array değişken adının pointer değişken adı gibi kullanımını örneklendirdik.

rakamlar dizisini gösteren bir pointer tanımlasaydık 
    mesela "int *rakamlarPointer = &dizi[0];" gibi
    dizinin elemanlarına *(rakamlarPointer + 1) gibi ifadelerle erişebilirdik. Bunun örneğini bir önceki ders vermiştik.

Önceki dersten bu dersin farkı array'ın kendi adını pointer değişken adı gibi kullanabilmemizdir.

6. satırdaki *rakamlar ifadesine dikkat etmelisiniz. * işareti pointerin gösterdiği adresteki veriye ulaşmamızı sağlıyordu.
    Burada da rakamlar array'ın değişken adı olmasına rağmen (pointer olarak tanımlanmamasına rağmen) sanki pointer gibi * işaretiyle veriye ulaşmamızı sağlayabiliyor.

7. satırda da pointerlardaki kullanımın aynısını görüyoruz. + 1 ile array'ın bir diğer elemanına geçiş yapılabiliyor.

Aslında anlamamız gereken şey şudur: *rakamlar ifadesi rakamlar[0] ifadesinin eşitidir.
rakamlar, array'in adıdır ve aynı zamanda array'ın başlangıç adresini tutan bir pointer gibidir.
Yani rakamlar ifadesi &rakamlar[0] demektir. Bunları birbirinin yerine kullanmayı deneyerek sonuçları gözlemleyin.

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