#include <iostream>
using namespace std;
 
int Maxim(int arreglo[], int n){
    int max = arreglo[0];
    for (int i = 1; i < n; i++)
        if (arreglo[i] > max)
            max = arreglo[i];
    return max;
}
 
void countSort(int arreglo[], int n, int ind){
    int salida[n];
    int i, count[10] = { 0 };
    for (i = 0; i < n; i++)
        count[(arreglo[i] / ind) % 10]++;
 
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
 
    for (i = n - 1; i >= 0; i--) {
        salida[count[(arreglo[i] / ind) % 10] - 1] = arreglo[i];
        count[(arreglo[i] / ind) % 10]--;
    }
 
    for (i = 0; i < n; i++)
        arreglo[i] = salida[i];
}
 
 
void radix(int arreglo[], int n){
    int m = Maxim(arreglo, n);
    for (int ind = 1; m / ind > 0; ind *= 10)
        countSort(arreglo, n, ind);
}
 
 
void imprimirArreglo(int arreglo[], int n){
    for (int i = 0; i < n; i++)
        cout << arreglo[i] << " ";
}
 
int main(){
    int arreglo[1000000];
    int n = sizeof(arreglo) / sizeof(arreglo[0]);
    for (int i = 0; i < 1000000; i++)
{
    arreglo[i]=i;
}
    radix(arreglo,n);
    imprimirArreglo(arreglo, n);
    return 0;
}

