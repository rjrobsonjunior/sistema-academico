#include "professor.h"
#include <string.h>

Professor::Professor ( int diaNa, int mesNa, int anoNa, const char* nome ) :
Pessoa ( diaNa, mesNa, anoNa, nome)
{
    pUnivFiliado = NULL; 
    pDptFiliado = NULL;
}
Professor::Professor ( ) :
Pessoa ( )
{
    pUnivFiliado = NULL; 
    pDptFiliado = NULL;
}
Professor::~Professor ( )
{
    pUnivFiliado = NULL; 
    pDptFiliado = NULL;
}
void Professor::setUnivFiliado ( Universidade* pu )
{
    pUnivFiliado = pu;
}
void Professor::OndeTrabalho ( )
{
    cout << nomeP << "trabalha para a"<< pUnivFiliado->getNome() << endl;
}
void Professor::setDepartamento(Departamento* departamento)
{
    pDptFiliado = departamento;
    pUnivFiliado= departamento->getUnivesidade();
}


Departamento* Professor::getDepartamento()
{
    return (pDptFiliado);
}


void Professor::QualDepartamentoTrabalho()
{
    cout << pDptFiliado->getNome() << endl;
}