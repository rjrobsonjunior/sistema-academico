#include "principal.h"
#include <time.h>

Principal::Principal (){ 
    //atribui valores para as variaveis da data
    struct tm *local;
    time_t segundos;
    time(&segundos);
    local = localtime(&segundos);

    diaAtual = local->tm_mday;
    mesAtual = local->tm_mon + 1;
    anoAtual = local->tm_year + 1900;
    // Inicialização alunos
    Murilo.Inicializa(29, 1, 2004,"Murilo");
    Robson.Inicializa(1, 1, 2001, "Robson");
    //Registro dos Professores
    Simao.Inicializa(3, 10, 1976, "Jean Simão");
    Barreto.Inicializa(14, 3, 1969, "Rafael Barreto");
    Bogdan.Inicializa(4, 1, 1973, "Bogdan Nassu");
    //Registro dos nomes das Universidades
    UTFPR.setNome ("UTFPR");
    Princeton.setNome("Princeton");
    Cambridge.setNome("Cambridge");
    // Registro dos nome do Departamentos
    DAINF.setNome("Informatica");
    DAEL.setNome ("Eletronica");
    MatematicaPrinceton.setNome ("Matematica");
    EletonicaCambridge.setNome ("Eletronica");
    // Registro dos departamentos
    DAINF.inicializa("DAINF", 123, &UTFPR);
    DAEL.inicializa("DAEL", 125, &UTFPR);
    EletonicaCambridge.inicializa("Eletronica Cambridge", 124, &Cambridge);
    // "Agregação" dos Departamentos das Univesidades.
    UTFPR.setDepartamento ( &DAEL );
    UTFPR.setDepartamento ( &DAINF );
    Princeton.setDepartamento (&MatematicaPrinceton);
    Cambridge.setDepartamento (&EletonicaCambridge);
    printf ("\n");
    // "Filiação" a universidade.
    Simao.setUnivFiliado (&UTFPR);
    Barreto.setUnivFiliado (&Princeton);
    Bogdan.setUnivFiliado (&Cambridge);
    printf("\n");
    // "Filiação" ao departamento.
    Simao.setDepartamento (&DAEL);
    Barreto.setDepartamento (&MatematicaPrinceton);
    Bogdan.setDepartamento (&EletonicaCambridge);
    //associação aluno professor
    Murilo.setunivEstuda(&UTFPR);
    Robson.setunivEstuda(&UTFPR);
}
Principal:: ~Principal(){
    
}
void Principal::Executar ()
{   
    Simao.printIdade(diaAtual, mesAtual, anoAtual);
    Barreto.printIdade(diaAtual, mesAtual, anoAtual);
    Bogdan.printIdade(diaAtual, mesAtual, anoAtual);
    printf("\n");
    // Universidade que a Pessoa trabalha.
    Simao.OndeTrabalho();
    Barreto.OndeTrabalho();
    Bogdan.OndeTrabalho();
    printf("\n");
    // Departamento que a Pessoa trabalha.
    Simao.QualDepartamentoTrabalho ();
    Barreto.QualDepartamentoTrabalho ();
    Bogdan.QualDepartamentoTrabalho ();
}