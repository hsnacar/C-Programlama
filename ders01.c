#include<stdio.h>
int main( void )
{
    printf("Hello World\nMerhaba Dunya");
    return 0;
}

/*

include: programa dışarıdan bir dosyayı dahil etmek için kullanılır

stdio.h: "standart input output" ifadesinin kısaltmasıdır
         printf scanf gibi fonksiyonlar stdio.h kütüphanesinde bulunduğu için
         bu fonksiyonları ancak ilgili kütüphane dosyasını programa dahil edilerek kullanabiliriz.
         Kütüphane eklemeden kullanılabilecek sadece 33 komut vardır:
            auto, else, long, switch, break, enum, register, typedef,
            case, extern, return, union, char, float, short, unsigned,
            const, for, signed, void, continue, goto, sizeof, volatile,
            default, if, static, while, do, int, struct, _Packed, double

int:  tam sayı değişken türü. main'den dönecek değerin türünü tanımlamak için kullanılmış.

main: programın ana fonksiyonudur
      her c programında bir adet main fonksiyonu olmak zorundadır.

void: main fonksiyonunun argümansız çağrılmak zorunda olmasını gösterir.
      mesela main dışında iki sayıyı toplayan bir fonksiyon yazdınız => topla(x,y)
      fonksiyonu çağırırken x ve y argümanlarını yazmak zorunludur, topla(4,5) gibi.

printf: stdio.h kütüphanesine ait bir fonksiyondur ve ekrana yazıyı basmak için kullanılır.

\n: new line anlamındadır. Hello World ekrana basıldıktan sonra alt satıra geçilmesini sağlar.

return 0: return çağrılan fonksiyonun geriye değer döndürmesini sağlar. 
          main fonksiyonu çağrılırken int türünde yani tam sayı geriye döndürmesi beklenmektedir.
          hata mesajı almamak için geriye 0 (sıfır) döndürüyoruz.
          Mesela iki sayının toplamını hesaplayan bir fonksiyon yazsaydık geriye toplama sonucu döndürülecektir => return sonuc; gibi..

Not: Yazdığımız programın çalıştırılabilir olması için derlenmesi gereklidir.
     GCC (GNU Compiler Collection - https://gcc.gnu.org/) indirip kullanabilirsiniz.
     Terminal'de gcc -v yazarak varsa kurulu versiyona bakabilirsiniz.
     ders1.c dosyasını derlemek için komut:
        gcc ders1.c -o ders1
     çalıştırmak için:
        ./ders1

*/

/*
Programın çıktısı:
------------------

Hello World
Merhaba Dunya

*/
