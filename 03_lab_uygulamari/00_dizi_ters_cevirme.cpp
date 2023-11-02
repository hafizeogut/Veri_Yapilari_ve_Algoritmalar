#include <iostream>

using namespace std;

void diziTersCevir0(int dizi[],int uzunluk)
{
    if(uzunluk>1)
    {
        /*dizi elemanlarının değerlerini değiştiriliyor*/
        int tmp = dizi[0];
        dizi[0] = dizi[uzunluk-1];
        dizi[uzunluk-1]=tmp;
        cout<<dizi+1<<endl;


        diziTersCevir0(dizi+1,uzunluk-2);/*uzunluk-2 dizinin en büyük ve en küçük elemanları yer değiştirildi işlem dışı*/

    }    
    

}

void diziTersCevir1(char *dizi,int uzunluk)
{
    
    char *str;
    str = dizi + uzunluk-1;
    while (*str)
    { 
        cout<<"ds"<<*str<<endl;
        str--;
    }
    

}

void diziTersCevir2(int dizi[],int uzunluk)
{
    
    for(int i = 0; i<uzunluk; i++)
    {
        
        i++;
    }
    

}

int main(){
    int sayilar[]= {27,46,17,90,63};
    
    char dizi []="dizi"; 
    int diziUzunluk = sizeof(sayilar) / sizeof(int);

    //diziTersCevir0(sayilar,diziUzunluk);

    diziTersCevir1(dizi,diziUzunluk);
    //diziTersCevir2(sayilar,diziUzunluk);

    return 0;
}
