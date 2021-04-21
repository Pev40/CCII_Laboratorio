#include <iostream>
using namespace std;

long long int primo(long long int termino_inicial, long long int numero_a_consultar ){
    long long int i;

    for(i=termino_inicial+1;i<=numero_a_consultar; i++){
        if(numero_a_consultar%i==0 && i!=numero_a_consultar){
         return i;
        }
        if(i==numero_a_consultar){
            return 0;
        }
    }
}

int main(){
long int Factor_primo=1;
long int numero_a_consultar = 600851475143;
while (Factor_primo!=0)
{
    int busqueda=primo(Factor_primo,numero_a_consultar/2);
    if(busqueda!=0){
        Factor_primo=busqueda;
    }
    if(busqueda==0){
        return Factor_primo;
    }
}

cout<<"El mayor valor es: "<<Factor_primo;

}




/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int i, resultado;
    long long int MAX = 600851475143;
    int num;

    for( i = 2; i < MAX; i++)
    {
       if(MAX % i == 0)
       {
           MAX /= i;
           i = 2;
        }
    }

    printf("El maximo factor primo de 600851475143 es %d\n\n", MAX );

    system("pause");
    return 0;
}



*/
