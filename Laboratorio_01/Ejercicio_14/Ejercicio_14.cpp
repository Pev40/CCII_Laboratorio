#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

long long int positive_integers(int numer){
    int cant_numers=1;
    //cout<<numer<<" -->  ";
    while (numer!=1)
    {
        if(numer%2!=0){
            cant_numers++;
            numer= ( 3*numer ) +1;
            //cout<<numer<<" -->  ";
        }else{
            cant_numers++;
            numer=numer/2;
           //cout<<numer<<" -->  ";
        }
    }
    //cout<<endl;
return cant_numers;
}

int main(){
long long int numer_search=1, posibility;
long long int max=0;
while ( numer_search < 1000000 )
{
    posibility=positive_integers(numer_search);
    //cout<<numer_search<<endl;
    if(max < posibility ){
        max=numer_search;
        cout<<max<<" - "<<posibility<<endl;
    }
    numer_search++;
}

cout<<"El mayor posible es: "<<max;
system("pause");

}