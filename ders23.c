#include<stdio.h>
int main(void){
    int ikiBoyut[2][3];
    ikiBoyut[0][0] = 100;
    ikiBoyut[0][1] = 200;
    ikiBoyut[0][2] = 300;
    ikiBoyut[1][0] = 400;
    ikiBoyut[1][1] = 500;
    ikiBoyut[1][2] = 600;

    printf("ikiBoyut isimli array'ın [1][1] elemanı: %d", ikiBoyut[1][1]);

    return 0;
}

/*

Bu örnekte çok boyutlu dizileri ele alıyoruz.
ikiBoyut[2][3] demek 2x3 yani en fazla 6 eleman tutabilir anlamındadır.
ikiBoyut[2][3] dizisini anlayabilmek için 2 satır 3 kolondan oluşan bir tablo düşünmelisiniz.

            kolon 0     kolon 1     kolon 2 

satır 0:    100         200         300

satır 1:    400         500         600


İki boyutlu diziyi tek satırda nasıl tanımlarız?

int ikiBoyut[2][3] = { {100,200,300}, {400,500,600} };
veya
int ikiBoyut[][] = { {100,200,300}, {400,500,600} };

Burada {100,200,300} ifadesinin indeks numara karşılığı: [0][0],[0][1],[0][2]
{400,500,600} ise [1][0],[1][1],[1][2]

İndeks sıralamaları 1'den değil 0'dan başladığı için kodları anlamlandırmak zor olabilir
    ancak biraz dikkat ederseniz olayı çözersiniz.

*/

/*
Programın çıktısı:
------------------

ikiBoyut isimli array'ın [1][1] elemanı: 500

*/