#ifndef _ALUNO_H_
#define _ALUNO_H_
#include "pessoa.h"

#include <stdlib.h>
#include <iostream>
using namespace std;

class Aluno : public Pessoa
{
private:
    int RA;
    Universidade* pUnivEstuda;
   
public:
    Aluno( int ra, int diaNa, int mesNa, int anoNa, char* nome = "" );
    Aluno ();
    ~Aluno ( );

    void setunivEstuda(Universidade* pUniversidade);
    Universidade* getUnivEStuda();
    void printOndeEstuda();
    void setRA ( int ra );
    int getRA ( );
};
#endif

