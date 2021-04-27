#include <iostream>
#include <stdlib.h>
using namespace std;

int Invertir_posibilidad_capicua(int numero)
{
    int respuesta = 0;
    while (0 < numero)
    {
        respuesta = respuesta + numero % 10;
        respuesta = respuesta * 10;
        numero = numero / 10;
    }
    return respuesta / 10;
}

int main()
{
    int numero1 = 100;
    int numero2 = 100;
    int posibilidad;
    int max_capicua = 0;
    for (int i = 100; i < 1000; i++)
    {
        while (numero2 < 1000)
        {
            posibilidad = numero1 * numero2;
            if (Invertir_posibilidad_capicua(posibilidad) == posibilidad and posibilidad > max_capicua)
            {
                max_capicua = posibilidad;
                cout << max_capicua << endl;
            }
            numero2++;
        }
        numero2 = 100;
        numero1++;
    }
    cout << "capicua maximo " << max_capicua;
    system("pause");
    return 0;
}