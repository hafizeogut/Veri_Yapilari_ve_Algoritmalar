#include <iostream>

using namespace std;

int main(){
    int numbers[5] ={7,5,6,12,35};

    cout<<"Sayilar: ";

    //Dizi elemanlarının yazdırılması
    //Dongü için aralık kullanma
    for (const int &n:numbers)
    {
        cout<<n<<" ";
    }

    cout<<"Sayilar: ";
    //Dongü için aralık kullanma
    for (int n:numbers)
    {
        cout<<n<<" ";
    }

    cout<<"Sayilar: ";
    //Dongü için aralık kullanma
    for (int n:numbers)
    {
        cout<<n<<" ";
    }
}