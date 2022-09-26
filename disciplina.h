
#ifndef _DISCIPLINA_H
#define _DISCIPLINA_H

#include <iostream>
using namespace std;

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

    Disciplina(int newId, const char* n, Departamento* departamento);
    ~Disciplina();
    void inicializa(int newId, const char* n, Departamento* departamento);
    
    void setNome(const char* n);
    const char* getNome();
    
    void setId(int newId);
    int getId();

    void setDepartamento(Departamento* departamento);
    Departamento* getDepartamento();

    void setPprox(Disciplina* disciplina);
    Disciplina* getPprox();
};

#endif
