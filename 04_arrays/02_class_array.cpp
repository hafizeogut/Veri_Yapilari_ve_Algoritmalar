#include <iostream>

using namespace std;

class Kisi{
    private:
        string isim;
        int yas;
    
    public:
        Kisi(string ism){
            isim = ism;
            yas = 0;
        }
        /*Fonksiyonu sildiğinize çalışmayacaktır bu yapı bir yapıcı fonksiyon sınıfa eklenmelidir.*/    
        Kisi (){
            isim = "";
            yas = 0;
         }   
        
};
int main(){
    Kisi kisiler[10];
    return 0;


}