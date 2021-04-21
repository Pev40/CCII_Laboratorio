#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

long long int Sumar_en_Criba(bool array_num[], int len){
    long long int Num_contador=0;
    long long int posicion;
 for (int i = 2; i < len; i++)
 {
     if(array_num[i]==true){
         posicion=i;
         Num_contador=Num_contador+posicion;
         }
     }
return Num_contador;
 }



long long int Criba_de_Eratostenes(bool array_num[], int len){
    array_num[0] = false;
    array_num[1] = false;
    for(int i = 2; i <= len; ++i) 
        array_num[i] = true;

    for(int i = 2; i*i <= len; ++i) {
        if(array_num[i]) {
            for(int h = 2; i*h <= len; ++h)
                array_num[i*h] = false;
        }
    }
    return Sumar_en_Criba(array_num,len);

}

int main(){
    bool Numero[2000000];
    long long int Suma_primos;
    Suma_primos = Criba_de_Eratostenes(Numero, 2000000);
    cout<<"La suma es "<<Suma_primos;
system("pause");
return 0;
}