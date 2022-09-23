#include <string.h>
#include "departamento.h"
#include "universidade.h"


Departamento::Departamento(char* n, int newId, Universidade* universidade)
{
    inicializa(n, newId, universidade);
}


Departamento::~Departamento()
{

}


void Departamento::inicializa(char* n, int newId, Universidade* universidade)
{
    setNome(n);
    id = newId;
    pUnivPertencente = universidade;
    pPriDisc = NULL;
    pProxDisc= NULL;
}

char* Departamento::getNome()
{
    return nomeD;
}


void Departamento::setNome(const char* n)
{
    strcpy(nomeD, n);
}


void Departamento::setUniversidade(Universidade* universidade)
{
    pUnivPertencente = universidade;
}


Universidade* Departamento::getUnivesidade()
{
    return (pUnivPertencente);
}


void Departamento::setId(int newId)
{
    id = newId;
}


int Departamento::getId()
{
    return id;
}


void Departamento::pushDisciplina(Disciplina* disciplina)
{
    if(pPriDisc == NULL)
    {
        pPriDisc = disciplina;
        pProxDisc = disciplina;
    }
    else
    {
        pProxDisc->setPprox(disciplina); 
        pProxDisc = disciplina;
    }
}