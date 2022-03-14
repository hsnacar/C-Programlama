#include<stdio.h>

int main(void){

    char isim[20] = "Ece Zeynep";

    int indeks = 0;

    while(isim[indeks] != '\0'){
        printf("%c \n", isim[indeks]);
        indeks++;
    }

    return 0;

}

/*

Bu örneğimizi, derleyicinin char dizisinin son elemanı olarak  "\0" ifadesini ekleyip eklemediğini test etmek için yazdık.

while döngüsü, indeks'i her adımda bir artırarak dizi elemanlarını sırayla ekrana basıyor. 
    Koşul olaraksa ekrana basılacak karakterin "\0" dan farklı olmasına bakıyor.
    Ece Zeynep isminin harfleri bitip indeks 11'e ulaşınca koşul kontrol edildiğinde "\0" ile karşılaşılmasaydı döngü devam ederdi,
    ancak karşılaşıldığı için program p harfini yazıp sonlanıyor.

*/

/*
Programın çıktısı:
------------------

E 
c 
e 
  
Z 
e 
y 
n 
e 
p 

*/