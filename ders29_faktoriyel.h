long long int faktoriyel(int x){
    long long int sonuc = 1;
    for(int i = 1; i <= x; i++) {
        sonuc *= i;
    }
    return sonuc;
}