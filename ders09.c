#include<stdio.h>
int main (void) {
    int secim;
    printf(
        "\n"
        "\t1. Dosya\n"
        "\t2. Düzenle\n"
        "\t3. Görünüm\n"
        "\t4. Çalıştır\n"
        "\t5. Yardım\n"
        "\tLütfen yapmak istediğiniz işlemin numarasını girerek entere basınız: "
    );
    scanf("%d",&secim);
    printf("\n%d nolu işlemi seçtiniz.\n\n", secim);
    return 0; 
}

/*

    Bu dersimizde scanf ile kullanıcıdan bilgi girişinin nasıl yapıldığını ele aldık.
    scanf'in içindeki değişkenden önce & işaretinin kullanılmasına dikkat ediniz.
    8. derste & işaretinin değişkenin hafızadaki adresini gösterdiğini söylemiştik.
    13. satırdaki scanf("%d",&secim); ifadesi şu şekilde işliyor:
        scanf ile kullanıcıdan bilgi girişi isteniyor,
        daha sonra girilen veri &secim adresinin gösterdiği hafıza alanına kaydediliyor.

*/

/*
Programın çıktısı:
------------------


        1. Dosya
        2. Düzenle
        3. Görünüm
        4. Çalıştır
        5. Yardım
        Lütfen yapmak istediğiniz işlemin numarasını girerek entere basınız: 1

1 nolu işlemi seçtiniz.

*/