#include <iostream>

using namespace std;

int main(){
    char metin[100];
    cout <<"Metin Girin: "  ;
    cin>>metin;
    char *strMetin = metin;
    while (*strMetin)
    {
    	//cout << *strMetin << " => " << static_cast<int>(*strMetin) << endl;
        cout << *strMetin << " => " << int(*strMetin) << endl;
        strMetin++;
    }
    
    
}