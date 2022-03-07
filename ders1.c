#include<stdio.h>
int main( void )
{
	printf("Hello World\nMerhaba Dunya");
}

/*

include: programa dışarıdan bir dosyayı dahil etmek için kullanılır

stdio.h: "standart input output" ifadesinin kısaltmasıdır
         printf scanf gibi fonksiyonlar stdio.h kütüphanesinde bulunduğu için
         bu fonksiyonları ancak kütüphane dosyası programa dahil edilerek kullanabiliriz.

int:  tam sayı değişken türü. main'den dönecek değerin türünü tanımlamak için kullanılmış.

main: programın ana fonksiyonudur
      her c programında bir adet main fonksiyonu olmak zorundadır.

void: main fonksiyonunun argümansız çağrılmak zorunda olmasını gösterir.
      mesela main dışında iki sayıyı toplayan bir fonksiyon yazdınız => topla(x,y)
      fonksiyonu çağırırken x ve y argümanlarını yazmak zorunludur, topla(4,5) gibi.

printf: stdio.h kütüphanesine ait bir fonksiyondur ve ekrana yazıyı basmak için kullanılır.

\n: new line anlamındadır. Hello World ekrana basıldıktan sonra alt satıra geçilmesini sağlar.

*/