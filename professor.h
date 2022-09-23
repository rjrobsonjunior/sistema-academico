#ifndef _PROFESSOR_H
#define _PROFESSOR_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

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
    Professor ( int diaNa, int mesNa, int anoNa, char* nome = "" );
    Professor ( );
    ~Professor ( );
    
    void setUnivFiliado ( Universidade* pu);
    void OndeTrabalho ( );
    void setDepartamento(Departamento* pdpto);
    Departamento* getDepartamento();
    void QualDepartamentoTrabalho ( );

};
#endif