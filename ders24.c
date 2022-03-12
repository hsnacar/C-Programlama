#include<stdio.h>

int main(void){

    int dizi[4];

    printf("dizi adresi %p \n", &dizi);
    printf("dizi[0] adresi %p \n", &dizi[0]);
    printf("dizi[1] adresi %p \n", &dizi[1]);
    printf("dizi[2] adresi %p \n", &dizi[2]);
    printf("dizi[2] adresi %p \n", &dizi[3]);

    return 0;
}

/*

Bu dersimizde dizilerin hafızadaki adreslerini inceliyoruz
& işaretinin bir değişkenin hafızada tutulduğu adresi gösterdiğini daha önce söylemiştik.

int türünde bir değişken hafızada 4byte'lık bir alan kaplamaktadır. (kullanılan bilgisayarın mimarisine göre değişebilir.) 

Ancak diziler birden fazla elemandan oluşabildiği için hafızada ayrılan alan da eleman sayısına göredir.
Mesela int türünde dizi[10] deseydik 4byte x 10 toplam 40byte'lık bir alan bu array'e ayrılacaktı. 

Örneğimizde dizi[0]'in adresi 1354179376 iken dizi[1]'in adresi 4byte sonraki adrestir 1354179380

Son olarak &dizi ile &dizi[0]'nin aynı değer olduğuna dikkatinizi çekmek isterim.
&dizi ile bakılan adres, array'ın tamamı için hafızada ayrılan alanın başlangıç adresidir, burası aynı zamanda dizi[0]'ın bulunduğu yerdir.

Not: Program çıktısında gördüğünüz adresler sizin bilgisayarında farklı bir adres olacaktır.

*/

/*
Programın çıktısı:
------------------

dizi adresi 1354179376 
dizi[0] adresi 1354179376 
dizi[1] adresi 1354179380 
dizi[2] adresi 1354179384 
dizi[2] adresi 1354179388 

*/