#include<stdio.h>
int main (void) {

    int x = 4, y = 5;

    if(x % 2 == 0) {
        printf("x sayısı (%d) çift sayıdır\n", x);
    } else {
        printf("x sayısı (%d) tek sayıdır\n", x);
    }

    if(y % 2 == 0) {
        printf("y sayısı (%d) çift sayıdır\n", y);
    } else {
        printf("y sayısı (%d) tek sayıdır\n", y);
    }

    return 0; 
}

/*

    Bu dersimizde if-else koşul kontrolcüsünü öğreniyoruz.
    if "eğer" anlamındadır.
    else "değilse" anlamındadır.
    if(x % 2 == 0) ifadesinin anlamı şudur: eğer x'in 2ye bölümünden kalan 0 ise şunu yap
    else yani x'in 2'ye bölümünden kalan 0 değilse şunu yap.
    6 ila 10 satırlardakilerin anlamını toparlarsak şöyle oluyor:
        eğer x'in 2'ye bölümünden kalan sıfırsa ekrana x'in çift sayı olduğunu yaz, 
        eğer bölümden kalan sıfır değilse ekrana x'in tek sayı olduğunu yaz.

    Bu derste daha önce görmediğimiz bir kullanım da == ifadesidir.
    = (tek eşit) atama operatörüdür
    == (çift eşit) if ile beraber kullanılınca eşitse anlamındadır.

*/