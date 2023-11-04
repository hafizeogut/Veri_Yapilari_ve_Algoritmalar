#include <iostream>
#include<stack>

using namespace std;

int main(){
    //string değerler içeren stack tanımlama
    stack<string>languages;

    //stacke eleman ekle
    languages.push("C++");
    languages.push("Java");
    languages.push("Python"); 
    string s=languages.top();
    cout<<s;

    //en üstteki elemanı yazdır
    cout<<languages.top();
    
}