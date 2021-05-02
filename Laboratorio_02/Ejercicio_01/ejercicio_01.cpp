#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

long long suma(long long * lista,long long inicio, long long fin){
    if(inicio > fin){
        return 0;
    }
    if (inicio == fin)
    {
        return lista[fin];
    }
    long long int primeraParte = suma(lista, inicio + 1,((inicio+1)+fin)/2  );
    long long int segundaParte = suma(lista,(((inicio +1)+fin)/2)+1,fin);

return lista[inicio ]+ primeraParte + segundaParte;
}

long long * generarLista( long long* lista, long long tam){

for (int i = 0; i < tam; i++)
{
    lista[i]=1;
}
return lista;

}

void mostrarArray(long long * lista, long long tam){

for (int i = 0; i < tam; i++)
{
    cout<<"posicion "<<i<<"  "<<lista[i]<<endl;
}
return ;

}

long long sumaiterativa(long long *lista, long long tam){
    long long contador=0;
    for (long long i = 0; i < tam ; i++)
    {
        contador+= lista[i];
    }
    return contador;
}


int main(){
    long long Tam = 1000000;
    long long * lista = new long long [Tam];
    generarLista(lista,Tam);
   // mostrarArray(lista, Tam);
    cout<<suma(lista,0, Tam);
 cout<<sumaiterativa(lista,Tam);
system("pause");
}

