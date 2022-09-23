#include "pessoa.h"

Pessoa::Pessoa ( int diaNa, int mesNa, int anoNa, char* nome = " " ){
    Inicializa(diaNa, mesNa, anoNa, nome);
}
Pessoa::Pessoa ( ){
    Inicializa(0, 0, 0, "");
}
Pessoa::~Pessoa ( ) { 

}
void Pessoa::Inicializa (int diaNa, int mesNa, int anoNa, char* nome = " " ){
    diaP = diaNa;
    mesP = mesNa;
    anoP = anoNa;
    strcpy(nomeP, nome);
    idadeP = 0;
}
void Pessoa::Calc_Idade (int diaAT, int mesAT, int anoAT ){
    idadeP = anoAT-anoP;
    if(mesP > mesAT){
        idadeP--;
    }
    else if(mesP==mesAT){
        if(diaP>diaAT){
            idadeP--;
        }
    }

}
void Pessoa::printIdade(int diaAt, int mesAt, int anoAt)
{
    Calc_Idade(diaAt, mesAt, anoAt);

     cout << "A idade da Pessoa " << nomeP << " seria" << idadeP << endl;
}