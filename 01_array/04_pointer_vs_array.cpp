#include <iostream>

using namespace std;

int main() {
    char array[] = "hafize";
    char *arrayPtr = array;

    while (*arrayPtr) {
        cout << *arrayPtr << " ";
        arrayPtr++;
    }
    
    //dizinin sonunu bulamıyor saçmalıyor
    int sayilar[] = {1, 2, 3, 4, 5};
    int *sayilarPtr = sayilar;

    while (*sayilarPtr) {
        cout << *sayilarPtr << " ";
        sayilarPtr++;
    }

    int elemanSayisi = sizeof(sayilar) / sizeof(sayilar[0]);

    for (int i = 0; i < elemanSayisi; i++) {
        cout << *sayilarPtr << " ";
        sayilarPtr++;
    }
    return 0;
}
