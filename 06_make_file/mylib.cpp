#include<iostream>
#include "header.hpp"


using namespace std;

void print(double dizi[],int n){
    for(int i=0;i<n;i++){
        cout<<dizi[i]<<" ";
 }
}

int toplam(double dizi[],int n){
    int sayac=0;
    for(int i=0;i<n;i++){
        sayac+=dizi[i];
    }
    return sayac;
}
double ortalama(double dizi[],int n){
    double sayac=toplam(dizi,n);
    return sayac/n;
}