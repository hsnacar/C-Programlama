#include<stdio.h>

extern float PI;
float koniHacmi(int r, int h);

int main(void)
{
   
    printf("Taban yarı çapı 10, yükselikliği 20 olan \n");
    printf("koni biçimindeki cismin hacmi: %f metreküptür \n(Pi %f alınmıştır)", koniHacmi(10, 20), PI);
   
    return 0;
}

/*

Tanımladığımız değişkenleri/fonksiyonları bağlantı durumuna göre şöyle sınıflandırabiliriz:
1- bağlantısız (auto, register)
2- iç bağlantılı (static)
3- dış bağlantılı (extern)
-------------------------------------------------
{
    küme parantezleri kapsamında yani
    burada tanımlanan değişken, bu kapsamın içinde geçerlidir ve bağlantısız olarak sınıflandırılır
    bağlantısız tanımlama için "auto" anahtar sözcüğü kullanılır
    ancak tanımlama yapılırken bağlantı sözcüklerinin hiçbiri kullanılmazsa auto yazılmasa da varsayılan olarak atanır.
    "int sayi;" ile "auto int sayi;" aynı anlamdadır.
    kapsam bitince sayi'nin yaşam ömrü biter.
}
    "sayi" burada (kapsam dışında) geçerli değildir.
-------------------------------------------------
int rakam = 0;
{
    rakam = 9;
}
    "rakam" burada (kapsam dışında) geçerlidir.

rakam değişkeni küme parantezleri dışında tanımlandığı için global değişkendir ve içinde bulunduğu c dosyasındaki tüm fonksiyonlarda kullanılabilir.
Daha önce ders16.c'de global değişken tanımlamayı ve kullanmayı örneklendirmiştik.
Global değişken atama yapmadan tanımlansa bile içeriğine sıfır atanarak hafızaya yazılır ve program bitene kadar ömrü sürer.
static anahtar ifadesi bir fonksiyonun içindeki (yerel) değişkenin fonksiyon her çağrıldığında değerini kaybetmeden kullanılmasını sağlıyordu.
Bunu ders17.c'de anlatmıştık.
O zaman static global ve yerel değişkenler için kullanılabiliyor.
Yerel değişkende yani fonksiyonun içinde kullanıldığında, değerini o fonksiyon için korumaya devam ettiğini söyleyebiliriz.
Global değişken için yazılmasa da varsayılan olarak static olduğunu söyleyebiliriz.
static ile ayarlanmış değişkenler "iç bağlantılı" olarak sınıflandırılır.
-------------------------------------------------
Bir önceki dersimizde kendi yazdığımız bir kütüphane dosyasını programımıza include ile dahil etmiştik.
Dış bağlantılı durumu burada karşımıza geliyor.
Bir değişkeni veya fonksiyonu dış bağlantılı yani programa dahil olan tüm dosyalarda geçerli kılmak istiyorsak extern anahtar kelimesiyle deklare ederiz.
ders29.c'ye eklediğimiz ders29_faktoriyel.h dosyasında tanımlanan fonksiyonda extern ifadesini görmüyoruz ancak program hata vermeden derlenip çalıştırıyor?
Bunun sebebi fonksiyonlar öntanımlı olarak extern'dir.
Ancak değişkenlerin dış bağlantılı olmasını istiyorsak yani diğer dosyalarda geçerli olsun istiyorsak extern olarak tanımlamalıyız.

"extern float PI = 3.141592;"

bu ifade şu anlama geliyor: PI isimli değişkenin veri türü float'tır yani kayan noktalı bir sayıdır, 
                            extern yani programa dahil edilen tüm dosyalarda geçerlidir yani yaşam ömrü devam eder.

Örneğimize gelirsek,

ders29.c'de programın ana dosyası dışındaki ikinci dosyayı include ile programa dahil etmiştik. stdio.h kütüphane dosyasını eklediğimiz gibi...
Bu dersimizde diğer dosyayı derleme aşamasında programa dahil ediyoruz. (derleme kodu aşağıda)

3. satırda: float veri tipindeki PI değişkenini extern olarak deklare (declare) ettik. Ancak herhangi bir değer ataması (initialize) yapmadık.
            Değer ataması yapmadığımız halde 10. satırda PI değişkenini ekrana yazdırmak için kullandık ve program derlenirken hata vermedi.
            Bunun sebebi derleyiciye extern ile şunu demiş oluyoruz, PI'ye değeri başka dosya içinde atanacak/atanabilir. Derleyici tüm derlenecek
            dosyaları ayrı ayrı derleyip PI'yi bulamazsa o zaman hata verecektir.
4. satırda: "koniHacmi" fonksiyonunun prototipini deklare ettik ancak işlev gövdesi henüz yok. Fonksiyonlar öntanımlı olarak extern yani dış bağlantılı olduğundan
            extern yazmasak da derleyici hata vermedi.
10. satırda: printf ile ekrana hacim hesabının sonucunu yazıyoruz. Hesaplamayı yapacak fonksiyonu da bu satırda çağırıyoruz. Geri dönen değeri %f ile printf'e geçiriyoruz.

Diğer dosyamızın içeriği ise şu şekide:
extern float PI = 3.141592;

float koniHacmi(int r, int h) {
    return ( ( PI * r * r * h) / 3 );
}

Burada da değişkende extern ifadesini kullandık fonksiyonda kullanmamıza gerek yoktu. 
    PI'ye değer atamasında, ana programda kullanıldığı için, extern anahtar sözcüğünü burada da kullandık.

UYARI: programı derlerken birden fazla dosya derleneceği için kullanım şöyledir:

       gcc ders30.c ders30_konininhacmi.c -o ders30  

Soru: Neden birden fazla dosya ile çalışmak isteyelim?
      Bu tür kullanım imkanları dile esneklik kazandırmak içindir. Ancak programlar genellikle yazıldıkları haliyle kalmazlar.
      Gelişen/değişen şartlara göre bazı eklemeler/çıkarmalar gerekebilir. Ana programı parçalara ayırarak değişiklikleri ek dosyalarda yaparak ana programı ellemeden hedefe ulaşmış oluruz.
      Ancak daha da önemlisi birden fazla kişiyle bir program geliştirirken iş bölümü açısından birden fazla dosya kullanımı oldukça işlevsel olacaktır.

*/  

/*
Programın çıktısı:
------------------

Taban yarı çapı 10, yükselikliği 20 olan 
koni biçimindeki cismin hacmi: 2094.394775 metreküptür 
(Pi 3.141592 alınmıştır)

*/