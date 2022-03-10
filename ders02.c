#include<stdio.h>
int main(void){
    const int degismeyen = 1;
    int degisken = 1;
    printf("Sabit: %d \nDeğişken: %d\n", degismeyen, degisken);
    // degismeyen = 2; Açıklamaları okuyunuz! (6. satır açıklaması)
    degisken = 2;
    printf("Sabit: %d \nDeğişken: %d\n", degismeyen, degisken);
    return 0;
}

/*

1. satır: stdio.h kütüphanesi printf fonksiyonu sebebiyle programa dahil ediliyor
2. satır: main, programın zorunlu ana fonksiyonudur. void main fonksiyonunun argümansız çağrılacağını söyler. 
          int ise fonksiyonun int türünde bir değer döndüreceğini anlatıyor.
3. satır: const bir sabit tanımlamak için kullanılır. const ile tanımlanan değişkenlerin içeriği daha sonra değiştirilemez. int veri türü yani tam sayı.
4. satır: degisken isimli değişkene (variable) 1 tam sayısı atanıyor.
5. satır: printf ekrana yazı basmak için kullanılır. %d çift tırnak içinde değişkenlerin sırasıyla geçirilmesini sağlar. 
          İlk %d "degismeyen"in değerini getirir. İkinci %d "degisken"in.
          %d int ve short veri türleri için kullanılır. 
          Diğer seçeneklerse şu şekilde:
          %c tek bir karakter (char)
          %ld uzun işaretli ondalık tamsayı (long)
          %u işaretsiz ondalık tamsayı (unsigned int, unsigned short)
          %f Gerçel sayı (float, double)
          %s karakter dizisi (string) (char)
          %lu işaretsiz uzun tamsayı (unsigned long)
          %hd short int
          %hu unsigned short int
          %Lf long double
          * Aşağıda veri türleri hakkında bilgi bulabilirsiniz.
          \n: kontrol karakteri olarak isimlendirilir. \n "new line" anlamındadır. 
          Diğer kontrol karakterleri şu şekilde:
          \b geri alma
          \r satırbaşı
          \t 1 (tab) ileri hareket
          \f sayfa ilerletme
          \v dikey durak
          \a beep sesi çıkart
          \' tek tırnak
          \" çift tırnak
          \? soru işareti
          \\ ters slash
          \ddd sekizli kodu ddd (1, 2 veya 3 adet sekizli rakam)
          \xhh onaltılı kodu hh (herhangi bir sayıda onaltılı rakam)
6. satır: const olarak tanımlanmış değişkenlerin (variables) içeri daha sonra değiştirilemez. 
          Bu sebeple bu satır program tarafından işletilmesin diye başına // koyularak yorum satırına çevrilmiştir. 
          Eğer // ifadesini silip derlemeye çalışırsanız hata alırsınız.
7. satır: "degisken"e yeni bir değer atanıyor.
8. satır: yeni değerler ekrana tekrar basılıyor.
9. satır: fonksiyonun sonunda sıfır değeri geriye döndürülerek program sonlandırılıyor.
10. satır: main fonksiyonunun kapsamı bitiriliyor.

C Dilindeki Temel Veri Türleri: (Diğer derslerde burada yer almayanları da anlatacağım: array, pointer, structure, union, enum)
int, tam sayılar (1, 7, 79 vb) Bit genişliği 16 olduğundan -32768 ile +32767 arasındaki tam sayıları tutabilir.
float ve double (kayan noktalı sayılar 1,5) float virgülden sonra 6 basamak double 10 basamak veri tutabilir.
char, tek karakter (a,x,f). Bellekte 1 byte yer kaplar.
bool, iki değer alabilir true ve false. mantıksal veri türüdür. 
void, boş veri tipi

** veri tiplerinin veri tutma kapasiteleri yeterli gelmediğinde 
signed (char, int), unsigned (char, int), long (int, double) ve short (int) 
değiştirici ifadeleriyle sınırları genişletilebilir.

char 8bit -128 ila 127
unsigned char 8bit 0 ila 255
signed char 8bit -128 ila 127
int 16bit -32768 ila 32767
unsigned int 16bit 0 ila 65535
short int 16bit -32768 ila 32767
unsigned short int 0 ila 65535
long int 32bit -2147483648 ila 2147483647
unsigned long int 32bit 0 ila 4294967295
float 32bit 3.4E-38 ila 3.4E-38
double 64bit 1.7E-308 ila 1.7E+308
long double 80bit 3.4E-4932 ila 1.1E+4932


Not: Yazdığımız programın çalıştırılabilir olması için derlenmesi gereklidir.
     GCC (GNU Compiler Collection - https://gcc.gnu.org/) indirip kullanabilirsiniz.
     Terminal'de gcc -v yazarak varsa kurulu versiyona bakabilirsiniz.
     ders1.c dosyasını derlemek için komut:
        gcc ders2.c -o ders2
     çalıştırmak için:
        ./ders2

*/

/*
Programın çıktısı:
------------------

Sabit: 1 
Değişken: 1
Sabit: 1 
Değişken: 2

*/