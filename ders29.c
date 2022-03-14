#include<stdio.h>
#include"ders29_faktoriyel.h"

int main(void)
{
    for(int y = 1; y <= 20; y++){
        printf("%d!: %lld \n", y, faktoriyel(y));
    }
   
    return 0;
}


/*

Bu dersimizde birden fazla c/h dosyasını kendimiz hazırlayarak çalışmayı örneklendirdim.
Programımız 1'den 20'ye kadarki sayıların faktöriyelini hesaplayıp ekrana basıyor.
Faktöriyel, bir sayının kendinden öncekilerle (1'e kadar) çarpımıdır. Mesela 5! = 5x4x3x2x1 = 120

Daha önce kendi hazırladığımız birden fazla c/h dosyasını birarada kullanmamıştık.
Programımızın 2. satırında ders29_faktoriyel.h dosyasını dahil ettik. 
Standart bir kütüphane olmadığı için dosya adı < > arasında değil " " arasında yazılıyor.

Dahil ettiğimiz dosyanın içeriği şu şekilde:
long long int faktoriyel(int x){
    long long int sonuc = 1;
    for(int i = 1; i <= x; i++) {
        sonuc *= i;
    }
    return sonuc;
}

Burada bir fonsiyon tanımladık. long long ifadesi fonsiyonun geriye büyük bir sayı döndüreceğini söylüyor.
Fonksiyon çalışmak için int türünde bir x değerine ihtiyaç duyuyor. Fonksiyon çağrılırken gelen x değerinin faktöriyelini hesaplayıp sonucu geri döndürüyoruz.

Ana programın 7. satırında %lld ifadesi geri dönen sayının çok basamaklı (long long int) olması sebebiyle %d yerine kullanıldı.

Programımızda bir for döngüsü bulunuyor. 
1'den 20'ye kadarki her bir sayı için faktoriyel() fonksiyonunu çağırıp hesaplamayı yaptırıyor ve ekrana sonucu basıyor.

*/

/*
Programın çıktısı:
------------------

1!: 1 
2!: 2 
3!: 6 
4!: 24 
5!: 120 
6!: 720 
7!: 5040 
8!: 40320 
9!: 362880 
10!: 3628800 
11!: 39916800 
12!: 479001600 
13!: 6227020800 
14!: 87178291200 
15!: 1307674368000 
16!: 20922789888000 
17!: 355687428096000 
18!: 6402373705728000 
19!: 121645100408832000 
20!: 2432902008176640000 

*/