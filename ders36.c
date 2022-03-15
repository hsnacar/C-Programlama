#include<stdio.h>
#define PI 3.141592

int main(void){

    printf("Pi sayısı: %f \n", PI);
    printf("Yarıçapı 5cm olan bir çemberin çevresi: %f cm'dir. \n", (2 * PI * 5));
    return 0;
}

/*

Programımızın 1. satırındaki ifadeyi ilk dersten beri kullanıyoruz.

1. satırdaki ifadede üç kısım vardır:
    a) # işareti bu satırın programa yönelik değil derleyiciye yönelik olduğu ifade eder. C dilinde buna preprocessor yani önişlemci deniliyor.
    Derleyiciye programı derlemeden önce bazı emirler vermek istersek preprocessor yani önişlemci kısmını kullanabiliriz.
    b) include: dosyayı dahil et
    c) <stdio.h>: include'un parametresi 

2. satır daha önce görmediğimiz bir önişlemci komutu. "define" önişlemci için değişken tanımlamada kullanılıyor.
    Programımızda PI isimli bir değişkene 3.141592 değerini atayıp bunu derleyiciye bildirdik.
    Bunun anlamı şudur, ey derleyici benim programımı derlemeden önce kodlarımda PI gördüğün her yeri 3.141592 ile değiştir sonra derleme işlemi yap.

Böyle bir şey neden var diye akla bir soru gelebilir.
Biz kısa programlar yazdığımız için hafızada çok yer kapladım diye bir endişemiz olmadı şu ana kadar.
Ancak çok satırlı ve çok dosyalı projelerde hafıza kullanımı ne kadar azaltılırsa program o kadar hızlı çalışacaktır.
PI'yi daha önce yaptığımız gibi bir değişken olarak programımızda tanımlasaydık onu her kullandığımızda hafızadan okuma işlemi yapılmak zorunda olacaktı.
Bu örnekteki kullanımda tekrar tekrar PI değişkenini okuma işi olmadığı için program çok daha verimli çalışacaktır.

Not: Önişlemci komutları derleyiciler arasında farklılık gösterebilir. Bir komut diğerinde olmayabilir. Bu sebeple derleyicinin dokümanlarına bakarak kod yazmalısınız.

*/

/*
Programın çıktısı:
------------------

Pi sayısı: 3.141592 
Yarıçapı 5cm olan bir çemberin çevresi: 31.415920 cm'dir. 

*/