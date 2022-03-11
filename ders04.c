#include<stdio.h>
int main (void) {

    int x = 5, y;
    printf("x = %d olmak üzere\n", x);
    printf("(Uyarı: y'nin değeri her atamadan sonra değişmektedir)\n");

    // (=) Atama operatörü
    y = x;
    printf("y = x atamasıyla y'nin değeri %d oldu\n", y);

    // (+=) Toplayarak Atama
    y += x; // y = y + x 
    printf("y += x atamasıyla y'nin değeri %d oldu\n", y);

    // (-=) Çıkartarak Atama
    y -= x; // y = y - x
    printf("y -= x atamasıyla y'nin değeri %d oldu\n", y);

    // (*=) Çarparak Atama
    y *= x; // y = y * x
    printf("y *= x atamasıyla y'nin değeri %d oldu\n", y);

    // (/=) Bölerek Atama
    y /= x; // y = y / x
    printf("y /= x atamasıyla y'nin değeri %d oldu\n", y); 

    // (%=) Mod alarak Atama
    y %= x; // y = y % x
    printf("y %= x atamasıyla y'nin değeri %d oldu\n", y);

    return 0;
}

/*
C dilinde atama işlemleri = ile yapılır. 
Atama operatörü aritmetik operatörlerle birlikte de kullanılabilir.
Aritmetik operatörler ile atama operatörü beraber kullanılırken önce aritmetik operatör sonra atama operatörü yazılır.

y += x ifadesi y = y + x ifadesinin kısa yazılışıdır.

*/

/*
Programın çıktısı:
------------------

x = 5 olmak üzere
(Uyarı: y'nin değeri her atamadan sonra değişmektedir)
y = x atamasıyla y'nin değeri 5 oldu
y += x atamasıyla y'nin değeri 10 oldu
y -= x atamasıyla y'nin değeri 5 oldu
y *= x atamasıyla y'nin değeri 25 oldu
y /= x atamasıyla y'nin değeri 5 oldu
y %= x atamasıyla y'nin değeri 0 oldu

*/