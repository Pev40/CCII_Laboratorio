#include <iostream>
#include <math.h>

using namespace std;

int finonaci(int termino){
    if(termino==0){
        return 0;
    }
    if(termino==1){
        return 1;
    }
return finonaci(termino-1)+finonaci(termino-2);
}


int main (){
   int termino=1;
   int suma=0;
 while (finonaci(termino)<(4 * pow(10,6))){
     if(finonaci(termino)%2==0){
         suma=suma+finonaci(termino);
     }
     termino++;
 }
 cout<<termino<<" Su suma es: "<<suma;
 
}