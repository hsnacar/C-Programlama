/*

(ders01.c'de) C dilinde 32 anahtar kelime olduğunu söyleyip listesini vermiştik:
            auto, else, long, switch, break, enum, register, typedef,
            case, extern, return, union, char, float, short, unsigned,
            const, for, signed, void, continue, goto, sizeof, volatile,
            default, if, static, while, do, int, struct, double
Bu bölümle birlikte bu anahtar kelimelerin tamamına (en azından ne olduklarına dair bilgi vererek) değinmiş olduk.

Buraya kadarki dersler, C dilini daha sonra öğrenmeyi planladığınız programlama dilleri için bir temel olması açısından merak edenler içindi.
Bundan sonraki dersler, C dili üzerinde çalışmaya devam etmek isteyenlere yönelik olacak.
Eğer amacınız, nesneye yönelik (object oriented) modern bir dil öğrenmekse veya o yöne doğru gitmekse C++, Java, C# veya Python ilginizi çekebilir.
Web backend development düşünüyorsanız C'den sonra PHP size oldukça tanıdık gelecektir.
Mobil uygulama geliştirme ile ilgiliyseniz Swift (IOS) veya Kotlin (Android) tarafına gitmelisiniz.

Tüm programlama dilleriyle ilgili şunu bilmelisiniz:
    Programlama dillerin hepsinde değişken tanımlama vardır, for-loop ve diğer döngüler yine bulunmakta, if-else mutlaka hepsinde mevcut.
    C dilinin üstüne "nesneyi yönelik programlama"nın (OOP) mantığını eklediğiniz zaman önünüze çıkacak herhangi bir dili kısa sürede kavramakta zorluk yaşamazsınız.
    C dilinin nesneye yönelik programlama (OOP) özelliği olan hali C++'dır.

C dili derslerinde mutlaka farketmiş olmalısınız, sürekli donanımla ilgili ufak tefek bilgiler vermek zorunda kaldık.
Eğer bundan sonraki derslere de devam edecekseniz bilgisayar mimarisiyle ilgili araştırma yapmanız gerekli.
C dili donanım üzerinde yüksek oranda hakimiyet kuran bir dildir. Donanım mimarilerini anlamadan bu dili tüm gücüyle kullanamazsınız.

Bundan sonra nelerden bahsedeceğim?
Bu derse kadar stdio.h ve string.h kütüphanelerinin bazı fonksiyonlarını kullandık.
Bundan sonra aşağıdaki C standart kütüphanelerinin fonksiyonlarını inceleyeceğiz:
assert.h
complex.h
ctype.h
errno.h
fenv.h
float.h
inttypes.h
iso646.h
limits.h
locale.h
math.h
setjmp.h
signal.h
stdalign.h
stdarg.h
stdatomic.h
stdbool.h
stddef.h
stdint.h
stdio.h
stdlib.h
stdnoreturn.h
string.h
tgmath.h
threads.h
time.h

Elbette bu kütüphanelerin tüm fonksiyonlarını örneklendiremeyiz. 
Çoğunluğa lazım olabilecek olanları örneklendirmeye çalışacağım.

*/