#include<stdio.h>
int main(void){
    
    int i = 0;
    
    for(;;){
        if( i >= 10){
            break;
        }
        i++;
        printf("%d\t", i);
    }

    return 0;
}

/*

    Bu dersimizde break ifadesini örneklendirdik.
    6. satırda for ile sonsuz bir döngü oluşturduk.
    break deyimi içinde bulunulan döngüyü sonlandırmak için kullanılır.
    for sonsuz döngüsü tekrarlanırken i her adımda bir artırılıyor.
    if ile i 10'a ulaşınca döngü break ile sonlandırılıyor.
    break çalıştırılınca program 13. satıra atlıyor yani döngünün dışındaki ilk satırdan devam ediyor.

*/