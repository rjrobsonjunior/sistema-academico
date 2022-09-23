#ifndef _DEPARTAMENTO_H_
#define _DEPARTAMENTO_H_

#include <iostream>
using namespace std;

#include "disciplina.h"
#include "universidade.h"

class Universidade;

class Departamento
{
private:

    int id;
    char nomeD[130];
    
    Universidade* pUnivPertencente;

    Disciplina* pPriDisc;
    Disciplina*  pProxDisc;
    

    public:

    Departamento(char* n="", int newId=0, Universidade* universidade=NULL);
    Departamento();
    void inicializa(char* n="", int newId=0, Universidade* universidade=NULL);
    ~Departamento();
    
    void setNome(const char* n);
    char* getNome();
    
    void setUniversidade(Universidade* universidade);
    Universidade* getUnivesidade();
    
    void setId(int newId);
    int getId();

    void pushDisciplina(Disciplina* disciplina);
    Disciplina* getDisciplinaById(int ID);
    void printDisciplinas();
};
#endif
