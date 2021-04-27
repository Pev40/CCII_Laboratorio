#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int Numero_triangular(int posicion)
{
    int numero = (posicion+(posicion+1))/2;
    cout<<"Numero: "<<numero<<endl;
    return numero;
}

int Cantidad_divisores(int numero)
{
    int contador_de_divisores = 0;
    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            contador_de_divisores++;
        }
        
        
    }cout<<"Cantidad: "<<contador_de_divisores<<endl;
    return contador_de_divisores;
}

int main()
{
    int numero = 1, numero_a_buscar;
    int Cant_divisor;
    while (true)
    {

        numero_a_buscar= Numero_triangular(numero);
        Cant_divisor = Cantidad_divisores(numero_a_buscar);
        if (Cant_divisor == 500)
        {
            cout << "El divisor es: " << Cant_divisor << endl;
            return 0;
        }
        numero++;
        Cant_divisor = 0;
    }

    system("pause");
    return 0;
}