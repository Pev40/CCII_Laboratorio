/*6. Implemente una función que reciba un arreglo de cadenas y su tamaño y ordene lexicográficamente dicho arreglo.
Tamaño del arreglo 1000000.*/

#include<bits/stdc++.h>

using namespace std;



void cambiar(string* a, string* b){
        string t = *a;
        *a = *b;
        *b = t;
}
 
int partition (string *A, int p, int r){
        string pivot = A[r]; //pivot = oto;
        
        int i = (p - 1); // i = -1
        for (int j = p; j <= r - 1; j++){
                if (string(A[j]) <= string(pivot)){
                        i++;
                        cambiar(&A[i], &A[j]);
                }
        }
        cambiar(&A[i + 1], &A[r]);
        return (i + 1);
}
 
void quickSort(string *A, int p, int r){ //amor todo perro comida oto        p=0 tam=4
        if (p < r){
                int q = partition(A, p, r);
                quickSort(A, p, q - 1);
                quickSort(A, q + 1, r);
        }
}

 
void imprimirArreglo(string *A, int tam){
        for (int i = 0; i < tam; i++)
                cout << A[i] <<endl;
        cout << endl;
}


string* generar(string *lista,int tam){
	srand(time(NULL));
    for(int i=0;i<tam;i++){
        string cadena = "";
        int cant = (1 + rand() % (10 - 1));
            for(int i=0; i <= cant; i++) {
                char letra = (97 + rand() % (122 - 97));
                cadena = cadena + letra;
        	}
			lista[i] = cadena; 
    	}
    return lista;
}

int main() {
	int tam = 1000000;
    string * lista = new string[tam];
    lista = generar(lista,tam);
    quickSort(lista,0,tam-1);
    imprimirArreglo(lista,tam);
}