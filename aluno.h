#ifndef _ALUNO_H_
#define _ALUNO_H_

#include "pessoa.h"
#include "universidade.h"


class Aluno : public Pessoa
{
private:
    int RA;
    Universidade* pUnivEstuda;
   
public:
    Aluno( int ra, int diaNa, int mesNa, int anoNa, const char* nomeP);
    Aluno ();
    ~Aluno ( );

    void setunivEstuda(Universidade* pUniversidade);
    Universidade* getUnivEstuda();
    void printOndeEstuda();
    void setRA ( int ra );
    int getRA ( );
};
#endif

