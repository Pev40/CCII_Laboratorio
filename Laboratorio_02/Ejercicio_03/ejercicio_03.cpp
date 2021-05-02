#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int Maxim(long long * arreglo, long long n )
{
    long long max = arreglo[0];
    for (long long i = 1; i < n; i++)
        if (arreglo[i] > max)
            max = arreglo[i];
    return max;
}

void countSort(long long * arreglo, long long  n, long long int ind)
{
    //long long salida[n];
    long long * salida = new long long [n];
    long long count[10] = {0};
    long long i;
    for (i = 0; i < n; i++)
        count[(arreglo[i] / ind) % 10]++;

    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (i = n - 1; i >= 0; i--)
    {
        salida[count[(arreglo[i] / ind) % 10] - 1] = arreglo[i];
        count[(arreglo[i] / ind) % 10]--;
    }

    for (i = 0; i < n; i++)
        arreglo[i] = salida[i];
}

void radix(long long * arreglo, long long n)
{
    long long m = Maxim(arreglo, n);
    cout<<m;
    for (long long ind = 1; m / ind > 0; ind *= 10)
        countSort(arreglo, n, ind);
}

void imprimirArreglo(long long * arreglo, long long n)
{
    for (long long i = 0; i < n; i++)
        cout << arreglo[i] << " ";
}

int main()
{
    long long Tam = 1000000;
    long long * arreglo = new long long [Tam];  
    srand(time(NULL));
    ///int n = sizeof(arreglo) / sizeof(arreglo[0]);
    for (long long i = 0; i < 1000000; i++)
    {
        arreglo[i] = rand()%100001;
    }//imprimirArreglo(arreglo, Tam);
    cout<<"                     "<<endl<<endl;
    cout<<Maxim(arreglo, Tam);system("pause");
    radix(arreglo, Tam);
    
    //countSort(arreglo,Tan,)
    imprimirArreglo(arreglo, Tam);
    system("pause");
    return 0;
}
