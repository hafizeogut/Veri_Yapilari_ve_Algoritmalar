#include <iostream>

using namespace std;

int main()
{
    //dizi oluşturuldu
    double sayilar[]={7,5,6,12,35,27};

    double toplam=0;
    double sayac=0;
    double ortalama;

    cout <<"Sayilar : ";

    //dizi elemanlarını yazdır
    for(const double &n:sayilar){
        cout<<n<<" ";
        toplam += n;
        ++sayac;
    }

    cout<<"\n Sayilarin toplami: "<<toplam<<endl;

    ortalama =toplam/sayac;
    cout << "Sayilarin Ortalamasi = " << ortalama << endl;

}