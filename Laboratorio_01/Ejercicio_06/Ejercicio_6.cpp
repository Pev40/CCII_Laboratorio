#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int sum_of_the_squares(int N_terminos)
{
    int contador = 0;
    for (int i = 0; i <= N_terminos; i++)
    {
        contador = contador + (i * i);
    }
    return contador;
}

int square_of_sum(int N_terminos)
{
    if (N_terminos % 2 == 0)
    {
        return pow(((N_terminos * (N_terminos + 1)) / 2), 2) + 1;
    }
    return pow(((N_terminos * (N_terminos + 1)) / 2), 2);
}

int main()
{
    int N_terminos, Diferencia;
    cout << "Ingrese el numero de terminos: ";
    cin >> N_terminos;
    cout << "La diferencia es: " << square_of_sum(N_terminos) << " - " << sum_of_the_squares(N_terminos) << " = " << (square_of_sum(N_terminos) - sum_of_the_squares(N_terminos));
    system("pause");
    return 0;
}