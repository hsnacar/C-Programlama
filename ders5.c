#include<stdio.h>
int toplamHesapla(int a, int b) {
    return (a + b);
}
int carpmaHesapla(int a, int b) {
    return (a * b);
}
int cikarmaHesapla(int a, int b) {
    return (a - b);
}
int main (void) {
    int x = 4, y = 8; 
    printf("x = %d ve y = %d olmak üzere\n", x, y);
    printf("x ve y'nin toplamı: %d\n",toplamHesapla(x,y));
    printf("x ve y'nin çarpımı: %d\n",carpmaHesapla(x,y));
    return 0; 
}

/*

Daha önceki derslerde programımızda sadece main fonksiyonu vardı. 
main fonksiyonu C için enter point yani başlangıç noktasıdır, bu sebeple her programda bir tane bulunmak zorundadır.
Bu örnekte toplamHesapla, carpmaHesapla ve cikarmaHesapla isminde üç fonksiyon daha bulunuyor.
Fonksiyonlar kullanılmadan önce tanımlanmalıdır. Bu sebeple main'den önce fonksiyonlarımızı tanımladık.
Fonksiyonlar çağrılmadan çalışmazlar. Mesela cikarmaHesapla isimli fonksiyon main içinde kullanılmadığı için çalışmamıştır.
Burada bahsedilecek başka konular da var örnek kodumuzla ilgili ancak adım adım ilermek için onları başka örneklere bırakıyorum.

*/