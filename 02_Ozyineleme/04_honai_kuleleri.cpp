#include <iostream>

using namespace std;
void Honai(int n,char kaynak, char ara, char hedef)
{
    if(n == 1){
        cout << n << ".Diski " << kaynak << " dan " << hedef << " ye tasi." << endl;
        return;

    }
    else
    {
        Honai(n,kaynak,hedef,ara);
        cout << n << ".Diski " << kaynak << " dan " << hedef << " ye tasi." << endl;
        Honai(n,ara,kaynak,hedef);

    }
    
}

int main() {
    int diskSayisi;
    cout << "Disk Sayisi:";
    cin>>diskSayisi;
    Honai(diskSayisi, 'A', 'B', 'C');
    return 0;
}