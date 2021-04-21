#include <iostream>

using namespace std;

int main(){
    int contador=0;
    for(int i=0; i<1000;i++){
        if(i%3==0){
            contador=contador+i;

        }else{
            if(i%5==0){
                contador=contador+i;
            }
        }
    }
    cout<<"La suma es: "<< contador;
    
    return 0;
}



