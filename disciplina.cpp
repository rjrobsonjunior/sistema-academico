
#include "disciplina.h"
#include "departamento.h"
#include "universidade.h"

Disciplina::Disciplina(int newId, char* n, Departamento* departamento)
{
    inicializa(newId, n, departamento);
}

Disciplina::~Disciplina()
{

}

void Disciplina::inicializa(int newId, char* n, Departamento* departamento)
{
    id = newId;
    strcpy(nomeDis, n);
    pDepartamento = departamento;
    pProx = NULL;
}

void Disciplina::setNome(char* n)
{
    strcpy(nomeDis, n);
}

char* Disciplina::getNome()
{
    return (nomeDis);
}

void Disciplina::setId(int newId)
{
    id = newId;
}

int Disciplina::getId()
{
    return id;
}

void Disciplina::setDepartamento(Departamento* departamento)
{
    pDepartamento = departamento;
}

Departamento* Disciplina::getDepartamento()
{
    return pDepartamento;
}


void Disciplina::setPprox(Disciplina* disciplina)
{
    pProx = disciplina;
}


Disciplina* Disciplina::getPprox()
{
    return pProx;
}