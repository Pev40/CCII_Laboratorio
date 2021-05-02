#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void printArray(int *arr, int size){
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void rvereseArrayrecursivo(int *arr, int start, int end){
	if (start > end/2 + 1)
	return;
	int temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;
	rvereseArrayrecursivo(arr, start + 1, end - 1);
}

void rvereseArrayiterativo(int arr[], int start, int end){
	while (start < end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

int main(){
	const int n = 10000;
	int *arr=new int [n];

	for (int i=0; i<n; i++)
		arr[i]=i+1;

	rvereseArrayrecursivo(arr, 0, n-1);
	printArray(arr, n);

	delete arr;
	return 0;
}