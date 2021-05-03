#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;


int formaIterativa(string Cadena){
    int contador = 0;
    int i=0;
    char letra = Cadena[i];
    int valor = static_cast<int>(letra);
   while (valor < '\0')
    {
        cout<<contador<<" letra: "<<letra<<endl;
        contador++;
        i++;
        letra = Cadena[i];
        valor = static_cast<int>(letra);
    }
return contador;
}

int main(){

string Cadena = "Si Fiorela hace bien el codigo, tal vez le doy postre";

cout<<formaIterativa(Cadena);    
system("pause");
 }
