#include <iostream>
using namespace std;
int main() {
    int myvar = 25;
    int* foo = &myvar;
    int bar = myvar;
    cout << "myvar : " << myvar << endl;
    cout << "foo : " << foo << endl;
    cout << "bar : " << bar << endl;
    return 0;
}