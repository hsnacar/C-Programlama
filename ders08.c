#include<stdio.h>
int main (void) {
    int secim = 5;
    printf("secim değişkeninin değeri şudur: %d \n", secim);
    printf("secim değişkeninin adresi şudur: %d \n", &secim);
   
    return 0; 
}

/*
    
    Bu derste & (ampersand) işaretinin ne işe yaradığını ele alıyoruz.
    RAM (random access memory - rastgele erişimli bellek) bilgisayarın önemli bir parçasıdır.
    Programımız çalışırken bir değişken oluşturup içine bir değer atadığında bu bilgiler memory'de yani hafızada tutulur.
    Memory yani hafıza 1 byte'lık ünitelerden meydana gelir. Her 1 byte'ın numarası yani adresi vardır.
    & işaretiyle hafızada tutulan değişkenimizin hangi adreste depolandığını öğrenebiliyoruz.
    Örnek kodumuzda 4. satırdaki printf ifadesi secim değişkenin değerini ekrana basarken,
        5. satırdaki printf ifadesi &secim şeklinde kullanılarak secim değişkeninin hafızadaki adresini ekrana basmaktadır. 
    
    Henüz 8. derste bu konuya girmenin gereksiz olduğunu düşünülebilir. 
        Ancak 9. dersteki scanf kullanımı için bu konudan biraz bahsetmek istedim.

*/

/*
Programın çıktısı:
------------------

secim değişkeninin değeri şudur: 5 
secim değişkeninin adresi şudur: 576096764 

*/