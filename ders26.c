#include <stdio.h>
int main(void)
{
    int rakamlar[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *pointer;

    pointer = rakamlar;

    printf("%d \n", *(pointer + 3));

    printf("%d \n", *(rakamlar + 3));

    return 0;
}

/*

Bu dersimizde pointer değişkenlerin dizilerle kullanımını inceliyoruz.


*/

/*
Programın çıktısı:
------------------

3
3

*/