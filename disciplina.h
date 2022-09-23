
#ifndef _DISCIPLINA_H
#define _DISCIPLINA_H

#include "aluno.h"
#include "departamento.h"
#include "universidade.h"

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

class Departamento;
class Universidade;

class Disciplina
{
private:
    int id;
    char nomeDis[30];
    
    //ponteiro para o proximo departamento da lista encadeada
    Departamento* pDepartamento;
    // Ponteiro para o próximo elemento da lista encadeada.
    Disciplina* pProx;

public:

    Disciplina(int newId=0, char* n="", Departamento* departamento=NULL);
    ~Disciplina();
    void inicializa(int newId=0, char* n="", Departamento* departamento=NULL);
    
    void setNome(char* n);
    char* getNome();
    
    void setId(int newId);
    int getId();

    void setDepartamento(Departamento* departamento);
    Departamento* getDepartamento();

    void setPprox(Disciplina* disciplina);
    Disciplina* getPprox();
};

#endif
