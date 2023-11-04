#include <iostream>


using namespace std;


int Uzunluk(char *str){
    int u=0;
    for(int i=0;str[i] != '\0';i++) u++;
    return u;
}

int UzunlukBulma(char * str){
    char *ptr;//ptr adında bir işaretçi olustu

    ptr = str; //str gelen string in 0. indisin adresini tutuyordu.ptrye aktarıldı
    while(*str){
     str++;//dizide konum olarak ilerlendi
    }
    return(str - ptr); //son konum-ilk konum yapıldı.

}
int main()
{
	char a[] = "hafize";
	cout<<UzunlukBulma(a);
}