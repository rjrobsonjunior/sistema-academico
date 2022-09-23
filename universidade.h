#ifndef _UNIVERSIDADE_H
#define _UNIVERSIDADE_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "departamento.h"
#include <vector>
using namespace std;
class Universidade{


private:
    char nomeU[130];
    vector <Departamento> ListaDep;

public:
    Universidade(char* nome="");
    Universidade();
    ~Universidade();
    void setNome(char* nome);
    char* getNome();
    void setDepartamento( Departamento* pDep);
    Departamento* getDepartamentoById(int ID);
    void imprimeDptos ( );
};

#endif