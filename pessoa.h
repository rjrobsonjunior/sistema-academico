#ifndef _PESSOA_H_
#define _PESSOA_H_


class Pessoa 
{
protected:
    int diaP;
    int mesP;
    int anoP;
    int idadeP;
    char nomeP[130];

public:
    Pessoa ( int diaNa, int mesNa, int anoNa, const char* nome );
    Pessoa ( );
    ~Pessoa ( );
    void Inicializa (int diaNa, int mesNa, int anoNa, const char* nome );
    void Calc_Idade (int diaAT, int mesAT, int anoAT );
    int getIdade();
    void printIdade(int diaAt, int mesAt, int anoAt);
    

};
#endif
