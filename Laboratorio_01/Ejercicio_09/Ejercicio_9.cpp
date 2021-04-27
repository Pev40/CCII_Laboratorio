#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

float C_de_pitagoras(float Num1, float Num2)
{
    return pow(((Num1 * Num1) + (Num2 * Num2)), 0.5);
}

int main()
{
    float posibilidad;
    cout << C_de_pitagoras(3.5, 4.78645);
    system("pause");
    for (float i = 1; i < 1000; i++)
    {
        for (float j = 1; j < 1000; j++)
        {
            posibilidad = i + j + C_de_pitagoras(i, j);
            // cout<<i<< " + " <<j<<" = "<<C_de_pitagoras(i,j)<<endl;
            if (posibilidad == 1000)
            {
                int final = i * j * C_de_pitagoras(i, j);
                cout << i << " + " << j << " + " << C_de_pitagoras(i, j) << " = " << final << endl;
                system("pause");
                return 0;
            }
            else
            {
                posibilidad = 0;
            }
        }
    }
    system("pause");
    return 0;
}