#include<stdio.h>
int main(void){

    int i;
    printf("Sıfırdan yirmiye kadarki çift sayılar şunlardır: \n");
    for(i = 0; i <= 20; i++){
        if(i % 2 != 0) {
            continue;
        }
        printf("\t%d", i);
    }

    return 0;
}

/*

Bu dersimiz continue deyimi ile ilgilidir.
break deyimi döngüyü sonlandırmak için kullanılıyordu.
continue ise döngüyü sonraki adıma geçmeye zorlar.
Örneğimizde 1'den 20'ye kadarki sayılar if ile tek/çift sayı bakımından kontrol ediliyor.
Eğer tek sayı ise döngü bir artırılarak yeniden başlatılıyor. (8. satırdaki continue'dan 5. satıra dönülüyor.)
Dolayısıyla tek sayılarda printf ifadesi çalıştırılmadan döngü yeni adıma geçmeye zorlanıyor.

*/

/*
Programın çıktısı:
------------------

Sıfırdan yirmiye kadarki çift sayılar şunlardır: 
        0       2       4       6       8       10      12      14      16      18      20
        
*/