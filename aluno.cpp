#include "aluno.h"
#include <iostream>
using namespace std;

Aluno::Aluno ( int ra, int diaNA, int mesNA, int anoNA, const char* nomeP):
Pessoa ( diaNA, mesNA, anoNA, nomeP)
{
    RA= ra;
    pUnivEstuda=NULL;
}
Aluno ::Aluno():
Pessoa(){
    RA= -1;
    pUnivEstuda=NULL;  
}
Aluno::~Aluno (){
    pUnivEstuda=NULL;
}
void Aluno::setunivEstuda(Universidade* pUniversidade){
    pUnivEstuda = pUniversidade;
}
Universidade* Aluno::getUnivEstuda(){
    
    return (pUnivEstuda);
}
void Aluno::setRA(int ra){
    RA=ra;
}
int Aluno::getRA(){
    return RA;
}
void Aluno::printOndeEstuda()
{
    cout << "O aluno " << nomeP << " estuda em " << pUnivEstuda->getNome() << endl;
}