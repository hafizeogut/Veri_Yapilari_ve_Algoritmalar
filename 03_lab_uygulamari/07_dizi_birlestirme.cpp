#include <iostream>

using namespace std;

int *DiziBirlestirme(int d1[],int d2[],int uzunluk1, int uzunluk2){
    int *sonuc = new int[uzunluk1+uzunluk2];
    for(int i =0;i<uzunluk1;i++)
    {
        sonuc[i]=d1[i];
    }
    for(int i = 0; i<uzunluk2; i++){
        sonuc[i+uzunluk1] = d2[i];
    }
    return sonuc;

}

int main(){
    int a[] = {1, 2, 0};
    int b[] = {3, 7, 9};

    int *p = DiziBirlestirme(a,b,3,3);

    for (int i = 0; i < 6; i++) {
        cout << p[i] << " ";
    }
    return 0;
}