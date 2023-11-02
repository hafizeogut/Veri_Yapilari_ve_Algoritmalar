#include <iostream>
using namespace std;
//Factorial function
int f(int n){ 
    if (n <= 1)
        return 1;
    else
        return n*f(n-1);
}
int main(){
    int num;
    cout<<"Bir sayi giriniz: ";
    cin>>num;
    cout<<"Girilen sayinin "<<num<<"! faktoriyeli= "<<f(num)<<endl;
    return 0;
}
