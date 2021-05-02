#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
int formaIterativa(char Cadena[]){
    int contador = 0;
    int i=0;
    while (Cadena[i] != '\0')
    {
        contador++;
        i++;
    } 
return contador;
}
int asd(char* str){
	if (*str == '\0')
		return 0;
	else
		return 1 + asd(str + 1);
}
int main(){
char Cadena[] = "SiFiorelahacebienelcodigo,talvezledoypostre";
cout<<formaIterativa(Cadena)<<" ";
cout<<"sadas_ "<<asd(Cadena);
system("pause");
 }