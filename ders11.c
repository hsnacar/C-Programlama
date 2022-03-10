#include<stdio.h>

int main (void) {

    int toplam = 0, son = 1;

    while (son <= 25){
        toplam += son;
        son++;
    }

    printf("1'den %d kadarki sayıların toplamı: %d \n", son-1, toplam);

    do {
        toplam += son;
        son++;
    } while (son <= 25);

    printf("1'den %d kadarki sayıların toplamı: %d \n", son-1, toplam);

    return 0; 
}

/*

   Bu dersimizde while ve do-while döngülerini ele alıyoruz.
   while (koşul) şeklinde oluşturduğumuz bloğun içindekiler koşul sağlanana kadar tekrar eder.
   örneğimizde son değişkeni 25'ten küçük veya eşit olana kadar while içindekiler çalıştırılıyor.
   for döngüsünde başlangıç-koşul-artış birarada yazılırken while'da sadece koşul yer alıyor.
   eğer koşulu değiştiren bir komut while içinde yer almıyorsa sonsuz döngü oluşmuş olur.
   Biz bu sebeple son++ komutuyla son değişkeninin değerini döngünün her tekrarlanmasında bir artırdık.
   while döngüsünde koşul başta kontrol edildiği için eğer koşul geçerli değilse while içindekiler bir kere bile çalıştırılmaz.
   ancak do-while döngüsü böyle değildir. do-while döngüsünde koşul en sonda kontrol edildiği için
   do ile başlayan blok içindekiler en az bir kere çalıştırılır ve döngünün sonunda koşul o şekilde kontrol edilir.
   örneğimizde son değişkeni ilk while döngüsünde 25'e ulaşıyor.
   normalde ikinci döngü olan do-while çalışmaması lazım çünkü her iki döngünün koşulu da aynı 25'ten küçük veya eşit olması durumu.
   ancak do-while döngüsü en az bir kez çalışıp sonra koşul kontrol edildiği için son değişkeni 25'ten 26'ya 16. satırda artırılıyor.

   Bu derste daha önce görmediğimiz ilişkisel operatörlerden biri olan <= (küçük eşittir)'e rastladık.
   Diğer ilişkisel operatörler şunlardır:
        ==  Eşittir
        >   Büyüktür
        <   Küçüktür
        !=  Eşit değildir
        >=  Büyük eşittir
        <=  Küçük eşittir

*/

/*
Programın çıktısı:
------------------

1'den 25 kadarki sayıların toplamı: 325 
1'den 26 kadarki sayıların toplamı: 351 

*/