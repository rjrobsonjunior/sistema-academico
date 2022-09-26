#ifndef _UNIVERSIDADE_H
#define _UNIVERSIDADE_H


#include "departamento.h"

#include <vector>
using namespace std;


class Universidade{

private:
    char nomeU[130];
    vector <Departamento*> ListaDep;

public:
    Universidade(const char* nome);
    Universidade();
    ~Universidade();
    void setNome(const char* nome);
    char* getNome();
    void setDepartamento( Departamento* Pdep);
    Departamento* getDepartamentoById(int ID);
    void imprimeDptos ( );
};

#endif