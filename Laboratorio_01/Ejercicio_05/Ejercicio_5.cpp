/*VERSION 1*/
/*#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int suma_primeros_numeros(int cant_termino){
    return (cant_termino*(cant_termino+1))/2;
}

int main(){
    int Contador_Suma=0;
    int Numero_en_busqueda=1;
    int N_Terminos;
    cout<<"Ingrese el numero de termino que desea buscar ";
    cin>>N_Terminos;
    while (true)
    {
        for (  int i = 1; i <= N_Terminos; i++)
        {
            if (Numero_en_busqueda%i == 0)
            {
                Contador_Suma+=i;
                cout<<Numero_en_busqueda<<" Se suma "<<i<<" a "<<Contador_Suma<<endl;
            }         
        }
        if(Contador_Suma== suma_primeros_numeros(N_Terminos)){
            cout<<"Valor minimo contenido de los "<<N_Terminos<<" es "<<Numero_en_busqueda<<endl;
            system("pause");
            return 0;
        }
        Contador_Suma=0;
        Numero_en_busqueda++;
    }
}
*/

/*VERSION 2*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int *new_array(int *Array_Old, int Num_new)
{
    int *Temporal;
    Temporal = new int[Num_new];
    for (int i = 0; i < Num_new - 1; i++)
    {
        Temporal[i] = Array_Old[i];
        Temporal[i + 1] = 0;
    }
    return Temporal;
}

bool search_number_in_array(int *Array, int len, int search_element)
{
    for (int i = 0; i < len; i++)
    {
        if (Array[i] == search_element)
        {
            return true;
        }
    }
    return false;
}

int search_position_number_in_array(int *Array, int len, int search_element)
{
    for (int i = 0; i < len; i++)
    {
        if (Array[i] == search_element)
        {
            return i;
        }
    }
    return 0;
}

int exponent(int numero, int divisor)
{
    int exponente = 1;
    while (numero == 1)
    {
        if (numero % divisor == 0)
        {
            numero /= divisor;
            exponente++;
        }
    }
    return exponente;
}

void view_array(int *Array_A, int *Array_B, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << Array_A[i] << " ^ " << Array_B[i] << endl;
    }
    return;
}

int main()
{
    int cantidad_de_primos = 0, N_terminos, Numero_final = 0;
    int *Primos;
    Primos = new int[cantidad_de_primos];
    int *Potencia_del_primo;
    Potencia_del_primo = new int[cantidad_de_primos];
    cout << "Numero de Terminos: ";
    cin >> N_terminos;
    for (int numero = 1; numero <= N_terminos; numero++)
    {
        cout << "Numero: " << numero << endl;
        for (int divisor = 1; divisor < numero; divisor++)
        {
            cout << "Divisor: " << divisor << endl;
            if (numero % divisor == 0)
            {
                if (search_number_in_array(Primos, cantidad_de_primos, divisor) == true)
                {
                    if (Potencia_del_primo[search_position_number_in_array(Primos, cantidad_de_primos, divisor)] < exponent(numero, divisor))
                    {
                        Potencia_del_primo[search_position_number_in_array(Primos, cantidad_de_primos, divisor)] = exponent(numero, divisor);
                    }
                }
                else
                {
                    cantidad_de_primos++;
                    Primos = new_array(Primos, cantidad_de_primos);
                    Potencia_del_primo = new_array(Potencia_del_primo, cantidad_de_primos);
                    Primos[cantidad_de_primos - 1] = divisor;
                    cout << exponent(numero, divisor);
                    Potencia_del_primo[cantidad_de_primos - 1] = exponent(numero, divisor);
                }
            }
        }
    }

    view_array(Primos, Potencia_del_primo, cantidad_de_primos);
    for (int i = 0; i < cantidad_de_primos; i++)
    {
        cout << "Numero: " << Numero_final << endl;
        Numero_final = pow(Primos[i], Potencia_del_primo[i]) * Numero_final;
    }
    cout << "El Numero que contiene: " << Numero_final << endl;
    system("pause");
    return 0;
}
