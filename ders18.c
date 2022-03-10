#include<stdio.h>
int main (void) {
    int* bellek;
    printf("bellek'in içeriği: %u\n", bellek);
    return 0; 
}


/*

Bu dersimizde int float gibi bir veri türü olan pointer (işaretçi) değişkenlerini ele alıyoruz.

Ancak pointer değişkenlerini anlamak için bir ön bilgiyi buraya yazmamız gerekli.
int a = 5; şeklinde bir değişken tanımladığımızda hafızada bir alan bu bilgiyi tutmak için ayrılır.
Diyelim ki hafızadaki 201-202-203-204 nolu alanlar "a" değişkeninin 5 değerini tutmak için ayrıldı.
Değişken tanımlarken veri türünün (int, float vb.) belirtilme zorunluluğu hafızada hazırlanacak alanın boyutuna karar verilebilmesi içindir.
Kapasitesi sınırlı olan kaynakları tam verimle kullanabilmek bazı kuralların olmasını zorunlu kılıyor.
Konuya geri dönersek a değişkeninin 5 olan değeri 201-202-203-204 nolu alanlarda tutuluyordu.
Daha önce 8. derste & (ampersand) işaretiyle değişkenin adresini ekrana yazdırmıştık.
İşte a değişkeninin &a ifadesiyle adresine baktığımızda 201'i yani a'ya ayrılan hafıza alanının başlangıç adresini görürüz.

Şimdi örnek kodumuza bakalım:
3. satırda "int bellek" yazmak yerine "int* bellek" yazdık. Buradaki yıldız işareti dikkatinizi çekmiştir.
"int*" => "içerisinde int türünde veri olan hafıza alanının başlangıç adresini tutan değişken" demektir.
Yukarıdaki programda bellek değişkenine bir değer ataması yapmadık. Sadece "int* bellek" şeklinde tanımlama yaptık.
Ancak 4. satırda printf ile içeriğini ekrana bastığımızda 602165312 gibi bir adres no görüyoruz.
Bunun sebebi "int* bellek" gibi bir değişken oluşturulduğunda (atama yapılmasa bile) veri türünün kapasitesi kadar hafızada bir yer hazırlanmasıdır.
İşte pointer değişkenler bu adres verilerini tutmak için kullanılıyor. 
Ayrıca pointer değişkenler printf içinde, her zaman pozitif bir değer olduğu için, %d değil %u (unsigned) karakter formatı ile kullanılıyor.

C dili pointer değişkenleri üzerinden işlem yapmaya imkan tanıdığı için son derece hızlı ve etkili programlar yazmaya olanak verir.
C dilini biliyorum diyebilmek için pointer konusunu tamamıyla anlamak bir zorunluluktur.
Pointer konusunu bir çok kez ele alacağız.
Olayın mantığını anlatabilmek için kısa örneklere uzun açıklamalar yazıyorum.
Bunun sebebi arka plandaki işleyişi yavaş yavaş size tanımak istememdir.

*/

/*
Programın çıktısı:
------------------

bellek'in içeriği: 602165312

*/