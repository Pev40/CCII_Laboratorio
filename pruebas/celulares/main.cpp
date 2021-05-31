#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Celular
{
private:
    char* NombreCelular;
public:
    Celular(char* Nombre );
    mostrar();
    ~Celular();
};

Celular::Celular(char* Nombre)
{
    NombreCelular = Nombre;
}

Celular::~Celular()
{
}

Celular::mostrar(){
    cout<<NombreCelular;
}


class Cargador
{
private:
    char* NombreCargador;
public:
    Cargador(char* Nombre);
    carga(Celular movil)
    ~Cargador();
};

Cargador::Cargador(char * Nombre);
{
    NombreCargador = Nombre;
}

Cargador::~Cargador()
{
}

Cargador::carga(Celular movil){
    
}




int main()
{
    Celular *celulares = new Celular[4];
    Cargador *tipos = new Cargador[4];

    for(int i=0; i < 4; i++){
        for (int j = 0; i < 4; j++)
        {
            tipos[i].cargar(celulares[j]);
        }
    }

    system("pause");
}
