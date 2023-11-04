#include <iostream>

using namespace std;

int *DiziOlusturSifirla(int uzunluk)
{
    int sayilar[uzunluk];
    for(int i = 0; i<uzunluk; i++)
    {
        sayilar[i] = 0;
    }
    return sayilar;
}

int main(){
    int uzunluk;
    cout<< "Dizi Uzunlugu: ";
    cin >> uzunluk;

    int *p = DiziOlusturSifirla(uzunluk);
    cout <<p[1];
    return 0;

}
/*Heap bellek yapısı kaynaklı hata olusacaktır bir sonraki uygulama bunun çözümü niteliğindedir.*/