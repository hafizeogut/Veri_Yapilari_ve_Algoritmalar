#include <iostream>
using namespace std;
int main() {
    int mark[5] = {19, 10, 8, 17, 9};
    // 4. elemani 9 olarak degistir
    mark[3] = 9;
    // kullanicidan girdi al
    // degeri ucuncu konumda sakla
    cin >> mark[2];

    // kullanicidan girdi al
    // i. konuma ekle
    int i = 3;
    cin >> mark[i - 1];
    // dizinin ilk ögesini yazdir
    cout << mark[0];
    // dizinin i. ögesini yazdir
    cout << mark[i - 1];
    return 0;
}