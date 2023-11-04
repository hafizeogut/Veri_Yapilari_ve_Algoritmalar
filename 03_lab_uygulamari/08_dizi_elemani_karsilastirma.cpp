#include <iostream>

using namespace std;

int Benzer(int dizi1[],int dizi2[],int uzunluk){
    for(int i=0; i<uzunluk; i++){
        for (int j=0; j<uzunluk; i++){
            if (dizi1[i] == dizi2[j]) return dizi1[i];
        }
    }
    return -1;
}

int main() {
    int a[] = {3, 7, 9};
    int b[] = {3, 7, 9};
    int sonuc = Benzer(a, b, 3);
    if (sonuc == -1) cout << "Dizilerde Benzer Eleman Yok";
    else cout << "ilk benzer eleman " << sonuc << endl;
    return 0;
}