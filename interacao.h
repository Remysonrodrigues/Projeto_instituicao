#ifndef INTERACAO_H_INCLUDED
#define INTERACAO_H_INCLUDED

    //(I) FUN��O DE APRESENTA��O DO PROGRAMA
    void apresenta_programa(char* msg);

    //(II) FUN��O DE DESPEDIDA DO PROGRAMA
    void mensagem_despedida(char* msg);

    //(III) FUN��O QUE LIMPA A TELA DE �SUARIO
    void limpa_tela(void);

    //(IV) FUN��O QUE LIMPA O BUFFER DE ENTRADA
    void limpa_buffer(void);

    //(V) FUN��O DE INTERA��O E VALIDA��O DE UMA OP��O DIGITADA PELO �SUARIO
    int le_opcao(int menor_valor, int maior_valor);

    //(VI) FUN��O QUE L� UMA UMA CADEIA DE CARACTERES
    char* le_string(void);

    //(VII) FU��O QUE APRESENTA UM MENU COM N�MERO INDETERMINADO DE OP��ES
    void apresenta_menu(int n_itens, int menor_opcao, ...);

#endif // INTERACAO_H_INCLUDED
