#ifndef _PESSOA_H_
#define _PESSOA_H_

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include "universidade.h"

class Pessoa 
{
protected:
    int diaP;
    int mesP;
    int anoP;
    int idadeP;
    char nomeP[30];
    //int idP;

    Universidade* pUniFiliado;
    Departamento* pDptoFiliado;

public:

    Pessoa ( int diaNa, int mesNa, int anoNa, char* nome = " " );
    Pessoa ( );
    ~Pessoa ( ) { }
    void Inicializa (int diaNa, int mesNa, int anoNa, char* nome = " " );
    void Calc_Idade (int diaAT, int mesAT, int anoAT );
    void printIdade(int diaAt, int mesAt, int anoAt);
    void setNome(char* n);
    void getNome();

};
#endif
