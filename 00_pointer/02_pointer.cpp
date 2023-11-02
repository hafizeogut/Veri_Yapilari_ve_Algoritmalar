#include <iostream>
using namespace std;
int main() {
    int var = 5;
    // işaretçi (pointer) degisken tanimla
    int* pointVar;
    // var isimli degiskenin adresini sakla
    pointVar = &var;
    // var degiskeninin degerini yazdir
    cout << "var = " << var << endl;
    // var degiskenin adresini yazdir
    cout << "var degiskeninin adresi (&var) = " << &var << endl << endl;
    // işaretçi pointVar degerini yazdir
    cout << "pointVar = " << pointVar << endl;
    // pointVar'ın isaret ettigi adresin icerigini yazdır
    cout << "pointVar'in isaret ettigi adresin icerigi (*pointVar) = "
    << *pointVar << endl;
    return 0;
}
