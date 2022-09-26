#ifndef _PROFESSOR_H
#define _PROFESSOR_H


#include <stdlib.h>
#include <iostream>
using namespace std;

#include "pessoa.h"
#include "universidade.h"
#include "departamento.h"

class Professor : public Pessoa
{
private:
    //ponteiro para Universidade e Departamento filiado
    Universidade* pUnivFiliado;
    Departamento* pDptFiliado;

public:
    Professor ( int diaNa, int mesNa, int anoNa, const char* nome );
    Professor ( );
    ~Professor ( );
    
    void setUnivFiliado ( Universidade* pu);
    void OndeTrabalho ( );
    void setDepartamento(Departamento* pdpto);
    Departamento* getDepartamento();
    void QualDepartamentoTrabalho ( );

};
#endif