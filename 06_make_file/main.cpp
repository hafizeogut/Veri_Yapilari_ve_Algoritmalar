#include<iostream>
#include "header.hpp"
using namespace std;
int main()
{
    // ornek dizi
    double dizi[]={12, 3, 4, 15};
    int n=4; // veya n = sizeof(dizi) / sizeof(dizi[0]);
    cout<<"Dizi Elemanlari=";
    print(dizi,n); cout<<endl;
    cout<<"Toplam ="<< toplam(dizi,n)<<endl;
    cout<<"Ortalama ="<< ortalama(dizi,n)<<endl;
    return 0;
}
