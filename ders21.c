#include<stdio.h>
int main(void){
    float dizi[5]; // Tanımlama
    dizi[0] = 0.3; // Değer atama
    dizi[1] = 0.5; // Değer atama
    dizi[2] = 0.7; // Değer atama
    dizi[3] = 0.9; // Değer atama
    dizi[4] = 2.0; // Değer atama
    printf("dizi isimli array'ın ilk elemanı: %f", dizi[0]);
    return 0;
}

/*

Bu dersimizde array yani dizi tanımlamayı ele aldık.
array'ler yani diziler içinde birden fazla veriyi tutan koleksiyonlardır.
3. satırda "float" veri türünde adı "dizi" olan ve içindeki eleman sayısı 5 olan bir array(dizi) tanımladık.
4. 5. 6. 7. 8. satırda ise array'ın (dizinin) elemanlarına veri atadık.
Dizinin içindeki elemanlara indeks numarası ile ulaşırız
Sıralama sıfırdan başlar: 0-1-2-3-4 şeklinde. 
Dolayısıyla son indeks numarası 4 ise dizimizin içinde 5 tane eleman vardır.

Dizilerin veri türü ve eleman sayısı daha sonra değiştirilemiyor. (Değiştirilebilmesi için dinamik hafıza ayırma yoluyla tanımlanması gerekir.)

*/

/*
Programın çıktısı:
------------------

dizi isimli array'ın ilk elemanı: 0.300000

*/