#include<stdio.h>
int main (void) {
    int *bellek = NULL;
    int rakam = 5;
    bellek = &rakam;
    printf("bellek'teki adresin gösterdiği veri: %d \n", *bellek);
    printf("rakam'ın depoladığı veri: %d ", rakam);
    return 0; 
}

/*

Bu dersimizde *'ın karıştırılan iki kullanımını örneklendirdik.
3. ve 6. satırda *bellek şeklinde aynı kullanımı görüyoruz.
3. satırdaki * işareti tanımlanan değişkenin pointer türünde olduğunu göstermek için kullanılıyor. Bunu ders18'de anlatmıştık.
Daha önce görmediğimiz kullanım ise 6. satırdaki *bellek ifadesidir.
* ne işe yarıyor: Tanım dışında kullanıldığında pointer'in gösterdiği hafıza ünitesindeki veriye ulaşmamızı sağlar.
Örnek kodumuz ders19'dakinin aynısı sadece 6. satırda bir farklılık var.
Yeniden kodları izah etmek gerekirse:
    3. satır: bellek adında bir pointer değişken tanımladık.
    4. satır: rakam adından bir int değişken tanımladık ve 5'e eşitledik.
    5. satır: rakam'ın hafıza adresini bellek'e atadık. (artık bellek pointer'i rakam'ın adresini gösteriyor)
    6. satır: *bellek ile pointerin gösterdiği adresteki veriye ulaşıp ekrana yazdırdık.

19. derste "5"i depolayan hafıza ünitesine ulaşmak için elimizde iki araç var demiştik.
Bu iki araç: rakam ve *bellek
İkisini de ekrana basınca aynı veriyi görüyoruz => 5

Bir evin iki adresi olduğunu düşünün :) Birine tarif ederken &rakam da desek bellek de desek aynı evi buldurmuş oluyoruz.

*/

/*
Programın çıktısı:
------------------

bellek'teki adresin gösterdiği veri: 5 
rakam'ın depoladığı veri: 5

*/