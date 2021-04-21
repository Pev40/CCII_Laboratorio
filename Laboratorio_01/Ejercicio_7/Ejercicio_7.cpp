#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int Buscar_en_Criba(bool array_num[], int len){
    int Num_contador=1;
    int posicion;
 for (int i = 2; i < len; i++)
 {
     if(array_num[i]==true){
         if(Num_contador<=10001){
             Num_contador++;
             posicion=i;
         }else{
             return posicion;
         }
     }
 }
}

int Criba_de_Eratostenes(bool array_num[], int len){
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
    return Buscar_en_Criba(array_num,len);

}

int main(){
    bool Numero[1000000];
    int capicua_10001;
    capicua_10001 = Criba_de_Eratostenes(Numero, 1000000);
    cout<<"El numero es:_ "<<capicua_10001;
system("pause");
return 0;
}