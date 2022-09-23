#ifndef _PRINCIPAL_H_
#define _PRINCIPAL_H_

# include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "pessoa.h"
#include "universidade.h"
#include "departamento.h"
#include "professor.h"
#include "aluno.h"
#include "disciplina.h"

class Principal
{
private:
    Professor Simao;
    Professor Barreto;
    Professor Bogdan;

    Universidade UTFPR;
    Universidade Princeton;
    Universidade Cambridge;

    Departamento DAINF;
    Departamento DAEL;
    Departamento MatematicaUTFPR;
    Departamento MatematicaPrinceton;
    Departamento EletonicaCambridge;

    int diaAtual;
    int mesAtual;
    int anoAtual;

public:
    Principal ();
    ~Principal ();
    void Executar();
};

#endif