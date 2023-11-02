#include <iostream>
#include <stdlib.h>

/*
Elemanları küçükten büyüğe doğru sıralı bir dizide
1->Dizinin orta elemanını bul
2->Eğer aranan eleman< ortadaki eleman
    sol tarafa
3->Eğer aranan elelman> ortadaki eleman
    sağ tarafa
*/
using namespace std;
int binarySearch(int A[],int ilk,int son,int x){
    cout<<"binarySearch(ilk="<<ilk<<",son="<<son<<")"<<endl; 
    if (ilk>son)
        return (-1);
    int middle = (ilk+son)/2;
    if (x == A[middle])
        return middle;
    else if (x<A[middle])
        return binarySearch(A,ilk,middle-1,x);
    else
        return binarySearch(A,middle+1,son,x);
    
}

int main()
{
    int A[]={1,3,5,6,8,11,23,45,67,89,99,111,122,134};
    int size = sizeof(A)/sizeof (int);
    int x = 1;

    int find = binarySearch(A,0,size -1,x);

    if (find == -1)
        cout<<"Element couldn't be found."<<endl;

    else{
        cout<<"Element found at "<<find<<endl;
        cout<<"A["<<find<<"]="<<A[find]<<endl; 
    }
    return 0;
}