#include <iostream>
#include <clocale>

using namespace std;

bool ikiliArama(int sayilar[],int baslangic,int bitis,int aranan)
{
    int orta_indis =(baslangic+bitis)/2;
    if (bitis<baslangic) return false;
    if (sayilar[orta_indis ==aranan]) return true;
    if (aranan<sayilar[orta_indis])
    {
        return ikiliArama(sayilar,baslangic,orta_indis-1,aranan);
    }
    else{
        return ikiliArama(sayilar,orta_indis+1,bitis,aranan);
    }
    
}

int main(){
    setlocale(LC_ALL,"Turkish");
    int dizi[]={17,27,46,63,90,112,125,140,157};
    int sayi;
    cout<<"Aranan Sayı Giriniz...:";
    cin>>sayi;
    if(ikiliArama(dizi,0,8,sayi)) cout<<"Aranan sayı bulundu";
    else cout<<"Aranan Sayı BULUMANADI";

    return 0;


}