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
    str = dizi + uzunluk-2;//-2 -->indis ve uzunluk farkı oluşması -->null terminatör
    while (str>=dizi)
    { 
        cout<<*str;
        str--;
    }
    
    

}

void diziTersCevir2(int *dizi,int uzunluk)
{
    
    int *str;
    str = dizi + uzunluk-1;//dizi dizisesinin son indisine ulaşıldı.
    while (str>=dizi)//str diziden konum olarak büyük olduğu müddetçe
    { 
        cout<<*str<<" ";
        str--;
    }
    
    

}
void diziTersCevir3(int dizi[],int uzunluk)
{
    
    for(int i = 0; i<uzunluk; i++)
    {
        cout<<dizi[i]<<" "; 
    }
    

}

int main(){
    int sayilar[]= {27,46,17,90,63};
    
    char dizi []="dizi"; 
    int diziUzunluk = sizeof(sayilar) / sizeof(int);

    //diziTersCevir0(sayilar,diziUzunluk);

    //diziTersCevir1(dizi,diziUzunluk);
    cout<<endl;
    //diziTersCevir2(sayilar,diziUzunluk);
    diziTersCevir3(sayilar,diziUzunluk);

    return 0;
}
