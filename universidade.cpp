#include "universidade.h"
#include <string.h>
#include <iostream>
using namespace std;

Universidade::Universidade(const char* nome){
    setNome(nome);
    int size = (int) ListaDep.size();
    for(int i = 0; i < size; i++)
        ListaDep[i] = NULL;
}
Universidade::Universidade ( )
{
    int size = (int) ListaDep.size();
    for(int i = 0; i < size; i++)
        ListaDep[i] = NULL;
   
}
Universidade::~Universidade ( )
{
}
Departamento* Universidade::getDepartamentoById(int ID)
{
    int size = (int) ListaDep.size();
    for(int i = 0; i < size; i++)
    {
        if( (ListaDep[i])->getId() == ID)
            return ListaDep[i];
    }
    cout << "Nenhum departamento cadastrado com Id " << ID << endl;
    return NULL;
}

char* Universidade::getNome ( )
{
    return nomeU;
}
void Universidade::setNome ( const char* nome )
{
    strcpy(nomeU, nome );
}
void Universidade::setDepartamento ( Departamento* Pdep )
{
   ListaDep.push_back(Pdep);
}
void Universidade::imprimeDptos ( ){

    int size = (int) ListaDep.size();

    for(int i = 0; i < size; i++)
    {
        cout << (ListaDep[i])->getNome() << endl;
    }
}