#include<iostream>
#include<sstream>

using namespace std;

int StringToInt(string str) {
    if (str.empty()) {
        cout << "Geçersiz boş bir dize." << endl;
        return 0; // veya uygun bir hata değeri
    }

    stringstream ss(str);
    int deger;

    ss >> deger;
    return deger;
}



int a2b2(int a, int b) {
 return a * a + b * b;
}

int main(int argc,char *argv[])
{
    if (argc!=1)
    {
        int x,y;
        x=StringToInt(argv[1]);
        y=StringToInt(argv[2]);
        cout << "x^2+y^2=" << a2b2(x, y) << endl;
        return 0;

    }
    
}