#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void printArray(long long *arr, long long size){
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void rvereseArrayrecursivo(long long * arr, long long start, long long enld, long long temp){
	cout <<"posicion "<<arr[start]<<" fin "<<arr[enld]<<"        "<<endl;
	if (start < (enld)){
		return;
	}else{
	temp = arr[start];
	arr[start] = arr[enld];
	arr[enld] = temp;
	rvereseArrayrecursivo(arr, start + 1, enld - 1, temp);
	}
	
	
}

void rvereseArrayiterativo(long long arr[], long long start, long long end){
	while (start < end){
		long long temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

int main(){
	long long n = 100000;
	long long * arr = new long long [n];

	for (int i=0; i<n; i++)
		arr[i]=i+1;
long long int temporal=0;
	rvereseArrayrecursivo(arr, 0, 1000000,temporal );
	printArray(arr, n);
	system("pause");
	delete arr;
	return 0;
}