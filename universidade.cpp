#include "universidade.h"

Universidade::Universidade(char* nome=""){
    setNome(nome);

    int size = (int) ListaDep.size();
    for(int i = 0; i < size; i++)
        ListaDep[i] = NULL;
}
Universidade::Universidade ( )
{

}
Universidade::~Universidade ( )
{
}
Departamento* Universidade::getDepartamentoById(int ID)
{
    int size = (int) ListaDep.size();

    for(int i = 0; i < size; i++)
    {
        if( (ListaDep[i])->getId() == ID)
            return ListaDep[i];
    }
    cout << "Nenhum departamento cadastrado com Id " << ID << endl;
    return NULL;
}

char* Universidade::getNome ( )
{
    return nomeU;
}
void Universidade::setNome ( char* nome )
{
    strcpy(nomeU, nome );
}
void Universidade::setDepartamento ( Departamento* pdep , int ctd )
{
    ListaDep.push_back(pDep);
}
void Universidade::imprimeDptos ( ){

    int size = (int) ListaDep.size();

    for(int i = 0; i < size; i++)
    {
        cout << (ListaDep[i])->getNome() << endl;
    }
}