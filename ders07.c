#include<stdio.h>
int main (void) {

    int i = 0, toplam = 0;

    for(i = 0; i < 100; i++) {
        toplam += i;
    }
    printf("toplam: %d\n", toplam);

    return 0; 
}

/*

Programın içinde bazı işlemleri çok defa yaptırmak isteyebiliriz.
for döngüsü (loop) bir işlemi istenen sayıda tekrar tekrar yaptırmak için kullanılır.
Mesela bu program 1'den 100'e kadar olan sayıların toplamını hesaplıyor. 

daha önceki derslerden farklı olarak sadece 6. satır olduğu için o kısmı izah ederek dersi bitirelim:
    for(i = 0; i < 100; i++): 
    for(koşul) şeklinde düşündüğümüzde koşul kısmında üç parametre vardır.
    i = 0, döngünün başlangıç değeridir
    i < 100, döngünün bitme koşuludur. mesela buraya "1 < 1000000" yazsaydık bu döngü 1 milyon kere çalışacaktı. 
    for(;;) şeklinde yazmış olsaydık döngünün sonlanma şartı olmadığı için "sonsuz döngü" meydana gelecekti.
    i++ ise i = i + 1 anlamındadır ve döngü her seferinde 1 artacak anlamındadır.
    6. satırı şu şekilde cümle haline getirebiliriz: i sıfırdan başlayarak 100'e kadar her döngüde bir artarak aşağıdaki işlem yapılsın. 

    Döngü şöyle hareket ediyor:
    
    döngü i = 0 için başlar
    toplam değişkeninin değeri ile i değeri toplanır: 0 + 0
    döngü başa döner
    i < 100 kontrol edilir, eğer sonlanma koşulu gerçekleşmemişse i++ ile i 1 olur ve yeniden döngü başlar
    toplam değişkeninin değeri ile i değeri toplanır: 0 + 1
    döngü başa döner
    i < 100 kontrol edilir, eğer sonlanma koşulu gerçekleşmemişse i++ ile i 2 olur ve yeniden döngü başlar
    toplam değişkeninin değeri ile i değeri toplanır: 1 + 2
    .
    .
    .
    i < 100 kontrol edilir, eğer sonlanma koşulu gerçekleşmemişse i++ ile i 99 olur ve yeniden döngü başlar
    toplam değişkeninin değeri ile i değeri toplanır: 4851 + 99
    son adımda i 100 olduğu için for biter ve printf satırına geçilir.

*/

/*
Programın çıktısı:
------------------

toplam: 4950

*/