#include<stdio.h>

const float PI = 3.141592;

float silindirinHacmi(int girilenYaricap, int girilenYukseklik);

int main(void)
{
    int yaricap = 0, yükseklik = 0;

    printf("\t\nLütfen silindirin yarıçapını (r) giriniz: ");
    scanf("%d", &yaricap);
    printf("\t\nLütfen silindirin yüksekliğini (h) giriniz: ");
    scanf("%d", &yükseklik);

    printf("\t\nGirilen değerlere göre silindirin hacmi %f olarak hesaplandı.", silindirinHacmi(yaricap, yükseklik));

    return 0;
}

float silindirinHacmi(int girilenYaricap, int girilenYukseklik) {
    return (PI * girilenYaricap * girilenYaricap * girilenYukseklik);
}

/*

Bu dersimizde global değişken tanımlamasını örneklendiren bir program hazırladık.

3. satırda: PI sayısı değişmeyen bir sayı olduğu için const ile float türünde GLOBAL bir sabit tanımladık.
            22. satırda PI sayısının kullanımına dikkat ediniz. 
            Eğer PI global değişken yani her yerde tanımı geçerli bir değişken olmasaydı,
            program 22. satırda hata verecekti.
            Buradan önemli bir kuralı anlamamız gerekli. Değişkenler tanımlandığı fonksiyonun içinde geçerlidir.
            Eğer tüm fonksiyonlarda geçerli bir değişken tanımlamak istiyorsak global değişken tanımlamalıyız.
            Global değişken fonksiyonların dışında tanımlanan değişkenlerdir. 

5. satırda: geriye float türünde veri döndüren ve çağrılmak için iki int türünde değere ihtiyaç duyan
            silindirinHacmi isimli fonksiyonunu prototipini tanımladık.

16. satırda: printf içinde %d yerine %f kullandık. Çünkü silindirinHacmi fonksiyonu geriye float türünde bir veri döndürüyor.

21-23 satırlarda: silindirinHacmi fonsiyonunun işlevini tanımladık.

*/