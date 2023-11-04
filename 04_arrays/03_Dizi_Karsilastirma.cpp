#include <iostream>

using namespace std;


bool Esitmi(int d1[],int d2[],int u1, int u2)
{
    if(u1 != u2) return false;
    
    for(int i=0; i<u1; i++)
    {
        if(d1[i] != d2[i]) return false;
    }
}

int main(){
    int a[]={3,7,9};
    int b[]={3,7,9};
    if(Esitmi(a,b,3,3)) cout<<"diziler esit";
    else cout<<"diziler esit degil";
    return 0;
}