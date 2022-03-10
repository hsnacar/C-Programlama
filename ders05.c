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

Bu örnekte öğrenmeniz gereken, fonksiyonların nasıl tanımlandığı ve çağrıldığı meselesidir.
toplamHesapla(x,y) ifadesi x ve y değerlerini toplamHesapla fonksiyonuna gönderiyor.
toplamHesapla fonksiyonunda x ve y, a ile b'ye geçiriliyor.
return (a + b) ile x ve y'nin toplamları geri döndürülüyor.
toplamHesapla fonksiyonu a ve b tam sayı değerleri ile çağrılmazsa çalışmaz.
Mesela toplamHesapla(x) şeklinde y yazılmadan gönderilseydi çalışmayacaktı.
toplamHesapla(4,8) şeklinde hatasız çalışacaktır. İlla x ve y gibi değişken kullanılmak zorunda değildir.
Fonksiyonlar hangi argümanları bekliyorsa ona göre çağrılmalıdır. toplamHesapla iki tane int türünde değerle çağrılmalıdır.
Mesela toplamHesapla("hasan", "acar") şeklinde çağrılsaydı program hata verecekti.

*/

/*
Programın çıktısı:
------------------

x = 4 ve y = 8 olmak üzere
x ve y'nin toplamı: 12
x ve y'nin çarpımı: 32

*/