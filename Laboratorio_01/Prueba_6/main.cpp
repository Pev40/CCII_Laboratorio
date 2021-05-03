#include <iostream>

#include <bits/stdc++.h>

using namespace std;

long long suma(int *a){
	long long int suma = 0;
	for(long long i = 0;i<1000000;i++){
    	suma +=a[i];
	}
	return suma;
}


long long int asd(int *A, int N){
	if (N <= 0)
		return 0;
	return (asd(A, N--) + A[N - 1]);
}


unsigned long long int recursivo(int *array, long long int posicion,long long int contador ){

	if(posicion==1000000){
		return 0;
	}
	else{
		cout<<contador<<"posi "<<posicion<<endl;
		posicion++;
		contador= array[posicion] + recursivo(array,posicion,contador);
	}
	return contador;

	}

int main() {
    int *array= new int[1000000];
    for(long long i = 0;i<1000000;i++){
    	array[i]=2;
	}
	long long int contador =0;
	cout<<"es"<<suma(array);
	cout<<"recuersion"<<recursivo(array,0,contador);




    return 0;
}
