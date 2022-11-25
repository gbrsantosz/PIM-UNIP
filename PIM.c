#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <stdbool.h>

//DEFINI��O DE ESTRUTURA PARA SISTEMA DE LOGIN.

typedef struct{
    char usuario[16];
    char senha[16];
} login;

//DEFINI��O DE ESTRUTURA PARA CADASTRO DE VE�CULOS.

typedef struct{
    char placa[7];
    char fabricante[50];
    char modelo[50];
    char categoria[50];
    char chassi[50];
    char loc_saida[50];
    char loc_chegada[50];
    int ano, cv_feito, qtd_viagem;
    float km;
    float valor_viagem;
} cadVei;

//DEFINI��O DE ESTRUTURA PARA CADASTRO DE FUNCION�RIOS.

typedef struct{
    char nome[50];
    char cpf[50];
    char telefone[50];
    char sexo[50];
    char rua[50];
    char bairro[50];
    char funcao[50];
    char naturalidade[50];
    char cidade[50];
    char estado[50];
    int idade, num, cf_feito;
    float salario;
} cadFunc;

//DEFINI��O DE ESTRUTURA PARA CADASTRO DE FORNECEDORES.

typedef struct{
    char nome[50];
    char telefone[50];
    char rua[50];
    char bairro[50];
    char e_mail[50];
    char cnpj[50];
    char ram_ativ[50];
    char cidade[50];
    char estado[50];
    float des_fixa;
    int num, cfo_feito;
} cadForn;

//A FUN��O A SEGUIR COLETA TODOS OS DADOS NECESS�RIOS PARA FAZER O CADASTRO
//DE DETERMINADO VE�CULO E OS ARMAZENA EM UM VETOR DE ESTRUTURAS DE 100 POSI��ES
//PARA QUE FUTURAMENTE SEJA CALCULADO OS LUCROS DE TODA A EMPRESA SENDO EXIBIDO
//COMO RELAT�RIO QUANDO SOLICITADO, AP�S A COLETA DOS DADOS SER� QUESTIONADO SE O
//USU�RIO DESEJA FAZER UM NOVO CADASTRO, CASO A RESPOSTA SEJA SIM, SER� NECESS�RIO
//INFORMAR NOVAMENTE TODOS OS DADOS. CASO A RESPOSTA SEJA N�O, ELE IR� RETORNAR AO
//MENU PRINCIPAL.

int cadastroVeiculo(cadVei cv[100]){

    int i = 0, cv_feito = 0, tamanho = 100;
    char resposta;

    do{
        fflush(stdin);
        printf("=================CADASTRO DE VE�CULOS================\n\n");
        printf("Informe a placa do ve�culo: ");
        gets(cv[i].placa);
        strlwr(cv[i].placa);
        fflush(stdin);
        printf("Informe o fabricante do ve�culo: ");
        gets(cv[i].fabricante);
        strlwr(cv[i].fabricante);
        fflush(stdin);
        printf("Informe o modelo do ve�culo: ");
        gets(cv[i].modelo);
        strlwr(cv[i].modelo);
        fflush(stdin);
        printf("Informe o ano do ve�culo: ");
        scanf("%d", &cv[i].ano);
        fflush(stdin);
        printf("Informe o chassi do ve�culo: ");
        gets(cv[i].chassi);
        strlwr(cv[i].chassi);
        fflush(stdin);
        printf("Informe a kilometragem: ");
        scanf("%f", &cv[i].km);
        fflush(stdin);
        printf("Informe o local de sa�da: ");
        gets(cv[i].loc_saida);
        strlwr(cv[i].loc_saida);
        fflush(stdin);
        printf("Informe o local de chegada: ");
        gets(cv[i].loc_chegada);
        strlwr(cv[i].loc_chegada);
        fflush(stdin);
        printf("Informe a quantidade de viagens: ");
        scanf("%d", &cv[i].qtd_viagem);
        fflush(stdin);
        printf("Informe o valor de cada viagem (R$): ");
        scanf("%f", &cv[i].valor_viagem);
        fflush(stdin);
        printf("\n=================CADASTRO COM SUCESSO================\n\n");
        printf("Deseja fazer um novo cadastro ? (S/N): ");
        resposta = getche();
        resposta = tolower(resposta);
        i++;
        cv_feito++;
        printf("\n\n");
        system("pause");
        system("cls");
    }while(resposta == 's' && i < tamanho);
    return cv_feito;
}

//A FUN��O A SEGUIR COLETA TODOS OS DADOS NECESS�RIOS PARA FAZER O CADASTRO
//DE DETERMINADO FUNCION�RIO E OS ARMAZENA EM UM VETOR DE ESTRUTURAS DE 100 POSI��ES
//PARA QUE FUTURAMENTE SEJA CALCULADO A FOLHA SALARIAL DE TODA A EMPRESA SENDO EXIBIDA
//COMO RELAT�RIO QUANDO SOLICITADO, AP�S A COLETA DOS DADOS SER� QUESTIONADO SE O
//USU�RIO DESEJA FAZER UM NOVO CADASTRO, CASO A RESPOSTA SEJA SIM, SER� NECESS�RIO
//INFORMAR NOVAMENTE TODOS OS DADOS. CASO A RESPOSTA SEJA N�O, ELE IR� RETORNAR AO
//MENU PRINCIPAL.

int cadastroFuncionario(cadFunc cf[100]){

    int i = 0, cf_feito = 0, tamanho = 100;
    char resposta;

    do{
        fflush(stdin);
        printf("================CADASTRO DE FUNCION�RIOS===============\n\n");
        printf("Informe o nome do funcion�rio: ");
        gets(cf[i].nome);
        strlwr(cf[i].nome);
        fflush(stdin);
        printf("Informe a funcao do funcion�rio: ");
        gets(cf[i].funcao);
        strlwr(cf[i].funcao);
        fflush(stdin);
        printf("Informe o sal�rio do funcion�rio (R$): ");
        scanf("%f", &cf[i].salario);
        fflush(stdin);
        printf("Informe o CPF do funcion�rio: ");
        gets(cf[i].cpf);
        strlwr(cf[i].cpf);
        fflush(stdin);
        printf("Informe o sexo do funcion�rio: ");
        gets(cf[i].sexo);
        strlwr(cf[i].sexo);
        fflush(stdin);
        printf("Informe a naturalidade do funcion�rio: ");
        gets(cf[i].naturalidade);
        strlwr(cf[i].naturalidade);
        fflush(stdin);
        printf("Informe o n�mero de telefone do funcion�rio: ");
        gets(cf[i].telefone);
        strlwr(cf[i].telefone);
        fflush(stdin);
        printf("Informe a cidade do funcion�rio: ");
        gets(cf[i].cidade);
        strlwr(cf[i].cidade);
        fflush(stdin);
        printf("Informe o estado: ");
        gets(cf[i].estado);
        strlwr(cf[i].estado);
        fflush(stdin);
        printf("Informe o endere�o do funcion�rio : ");
        gets(cf[i].rua);
        strlwr(cf[i].rua);
        fflush(stdin);
        printf("Informe o bairro do funcion�rio: ");
        gets(cf[i].bairro);
        strlwr(cf[i].bairro);
        fflush(stdin);
        printf("Informe o N�: ");
        scanf("%d", &cf[i].num);
        fflush(stdin);
        printf("\n=================CADASTRO COM SUCESSO================\n\n");
        printf("Deseja fazer um novo cadastro ? (S/N): ");
        resposta = getche();
        resposta = tolower(resposta);
        i++;
        cf_feito++;
        printf("\n\n");
        system("pause");
        system("cls");
    }while(resposta == 's' && i < tamanho);
    return cf_feito;
}

//A FUN��O A SEGUIR COLETA TODOS OS DADOS NECESS�RIOS PARA FAZER O CADASTRO
//DE DETERMINADO FORNECEDOR E OS ARMAZENA EM UM VETOR DE ESTRUTURAS DE 100 POSI��ES
//PARA QUE FUTURAMENTE SEJA CALCULADO AS DESPESAS FIXAS DE TODA A EMPRESA SENDO EXIBIDA
//COMO RELAT�RIO QUANDO SOLICITADO, AP�S A COLETA DOS DADOS SER� QUESTIONADO SE O
//USU�RIO DESEJA FAZER UM NOVO CADASTRO, CASO A RESPOSTA SEJA SIM, SER� NECESS�RIO
//INFORMAR NOVAMENTE TODOS OS DADOS. CASO A RESPOSTA SEJA N�O, ELE IR� RETORNAR AO
//MENU PRINCIPAL.

int cadastroFornecedor(cadForn cfo[100]){

    int i = 0, cfo_feito = 0, tamanho = 100;
    char resposta;

    do{
        fflush(stdin);
        printf("=================CADASTRO DE FORNECEDORES================\n\n");
        printf("Informe o nome social do fornecedor: ");
        gets(cfo[i].nome);
        strlwr(cfo[i].nome);
        fflush(stdin);
        printf("Informe o CNPJ do fornecedor: ");
        gets(cfo[i].cnpj);
        strlwr(cfo[i].cnpj);
        fflush(stdin);
        printf("Informe o valor aproximado de despesa fixa (R$): ");
        scanf("%f", &cfo[i].des_fixa);
        fflush(stdin);
        printf("Informe o ramo de atividade: ");
        gets(cfo[i].ram_ativ);
        strlwr(cfo[i].ram_ativ);
        fflush(stdin);
        printf("Informe o e-mail do fornecedor: ");
        gets(cfo[i].e_mail);
        strlwr(cfo[i].e_mail);
        fflush(stdin);
        printf("Informe um n�mero de telefone para contato: ");
        gets(cfo[i].telefone);
        strlwr(cfo[i].telefone);
        fflush(stdin);
        printf("Informe a cidade: ");
        gets(cfo[i].cidade);
        strlwr(cfo[i].cidade);
        fflush(stdin);
        printf("Informe o estado: ");
        gets(cfo[i].estado);
        strlwr(cfo[i].estado);
        fflush(stdin);
        printf("Informe o endere�o do fornecedor: ");
        gets(cfo[i].rua);
        strlwr(cfo[i].rua);
        fflush(stdin);
        printf("Informe o bairro do fornecedor: ");
        gets(cfo[i].bairro);
        strlwr(cfo[i].bairro);
        fflush(stdin);
        printf("Informe o N�: ");
        scanf("%d", &cfo[i].num);
        fflush(stdin);
        printf("\n=================CADASTRO COM SUCESSO================\n\n");
        printf("Deseja fazer um novo cadastro ? (S/N): ");
        resposta = getche();
        resposta = tolower(resposta);
        i++;
        cfo_feito++;
        printf("\n\n");
        system("pause");
        system("cls");
    }while(resposta == 's' && i < tamanho);
    return cfo_feito;
}

//A FUN��O A SEGUIR IR� SOLICITAR AO USU�RIO QUE INFORME A PLACA DE ALGUM VE�CULO,
//UTILIZANDO UMA VARI�VEL DE TIPO "BOOL" ELE IR� PERCORRER TODO O VETOR PROCURANDO
//A STRING DE PLACA NAS ESTRUTURAS QUE SEJA SEMELHANTE A STRING QUE FOI LIDA NA PLACA
//INFORMADA PELO USU�RIO, CASO O VE�CULO N�O ESTEJA CADASTRADO OU O USU�RIO TENHA INSERIDO
//ALGUMA INFORMA��O INCORRETA O MESMO SER� NOTIFICADO QUE O VE�CULO N�O FOI ENCONTRADO E
//IR� RETORNAR AO MENU PRINCIPAL, CASO O USU�RIO TENHA INSERIDO UMA INFORMA��O V�LIDA, O MESMO
//TER� DE INFORMAR OS DADOS QUE DESEJA QUE SEJAM ALTERADOS E AP�S ISSO RETORNAR�
//AO MENU PRINCIPAL.

void alterarcadastroVeiculo(cadVei cv[100]){

    char placa[20];
    int i, tamanho = 100;
    bool achou;

        fflush(stdin);
        printf("Informe a placa do ve�culo: ");
        gets(placa);
        strlwr(placa);
        achou = false;
        for (i = 0; i < tamanho && achou == false; i++){
            if (strcmp(placa, cv[i].placa) == 0){
                achou = true;
                    fflush(stdin);
                    printf("\n=============ALTERAR CADASTRO DE VE�CULOS============\n\n");
                    printf("Informe a atual kilometragem: ");
                    scanf("%f", &cv[i].km);
                    fflush(stdin);
                    printf("Informe o novo local de sa�da: ");
                    gets(cv[i].loc_saida);
                    strlwr(cv[i].loc_saida);
                    fflush(stdin);
                    printf("Informe o novo local de chegada: ");
                    gets(cv[i].loc_chegada);
                    strlwr(cv[i].loc_chegada);
                    fflush(stdin);
                    printf("Informe a atual quantidade de viagens: ");
                    scanf("%d", &cv[i].qtd_viagem);
                    fflush(stdin);
                    printf("Informe o atual valor de cada viagem (R$): ");
                    scanf("%f", &cv[i].valor_viagem);
                    fflush(stdin);
                    printf("\n=============CADASTRO ALTERADO COM SUCESSO===========\n\n");
                    system("pause");
                    system("cls");
            }
        }
        if(achou == false){
            printf("\nNenhum ve�culo foi encontrado!\n\n");
            printf("\n\n");
            system("pause");
            system("cls");
        }
}

//A FUN��O A SEGUIR IR� SOLICITAR AO USU�RIO QUE INFORME O NOME DE ALGUM FUNCION�RIO,
//UTILIZANDO UMA VARI�VEL DE TIPO "BOOL" ELE IR� PERCORRER TODO O VETOR PROCURANDO
//A STRING DE NOME NAS ESTRUTURAS QUE SEJA SEMELHANTE A STRING QUE FOI LIDA NO NOME
//INFORMADO PELO USU�RIO, CASO O FUNCION�RIO N�O ESTEJA CADASTRADO OU O USU�RIO TENHA INSERIDO
//ALGUMA INFORMA��O INCORRETA O MESMO SER� NOTIFICADO QUE O FUNCION�RIO N�O FOI ENCONTRADO E
//IR� RETORNAR AO MENU PRINCIPAL, CASO O USU�RIO TENHA INSERIDO UMA INFORMA��O V�LIDA, O MESMO
//TER� DE INFORMAR OS DADOS QUE DESEJA QUE SEJAM ALTERADOS E AP�S ISSO RETORNAR�
//AO MENU PRINCIPAL.

void alterarcadastroFuncionario(cadFunc cf[100]){

    char nome[50];
    int i, tamanho = 100;
    bool achou;

        fflush(stdin);
        printf("Informe o nome do funcion�rio: ");
        gets(nome);
        strlwr(nome);
        achou = false;
        for (i = 0; i < tamanho && achou == false; i++){
            if (strcmp(nome, cf[i].nome) == 0){
                achou = true;
                    fflush(stdin);
                    printf("\n=============ALTERAR CADASTRO DE FUNCION�RIOS============\n\n");
                    printf("Informe a altera��o de nome do funcion�rio: ");
                    gets(cf[i].nome);
                    strlwr(cf[i].nome);
                    fflush(stdin);
                    printf("Informe a altera��o de fun��o do funcion�rio: ");
                    gets(cf[i].funcao);
                    strlwr(cf[i].funcao);
                    fflush(stdin);
                    printf("Informe a altera��o salarial do funcion�rio: ");
                    scanf("%f", &cf[i].salario);
                    fflush(stdin);
                    printf("Informe o novo n�mero de telefone do funcion�rio: ");
                    gets(cf[i].telefone);
                    strlwr(cf[i].telefone);
                    fflush(stdin);
                    printf("Informe a nova cidade do funcion�rio: ");
                    gets(cf[i].cidade);
                    strlwr(cf[i].cidade);
                    fflush(stdin);
                    printf("Informe o novo estado do funcion�rio: ");
                    gets(cf[i].estado);
                    strlwr(cf[i].estado);
                    fflush(stdin);
                    printf("Informe o novo endere�o do funcion�rio: ");
                    gets(cf[i].rua);
                    strlwr(cf[i].rua);
                    fflush(stdin);
                    printf("Informe o novo bairro do funcion�rio: ");
                    gets(cf[i].bairro);
                    strlwr(cf[i].bairro);
                    fflush(stdin);
                    printf("Informe o novo N� do funcion�rio: ");
                    scanf("%d", &cf[i].num);
                    fflush(stdin);
                    printf("\n===============CADASTRO ALTERADO COM SUCESSO=============\n\n");
                    system("pause");
                    system("cls");
            }
        }
        if(achou == false){
            printf("\nNenhum funcion�rio foi encontrado!\n\n");
            printf("\n\n");
            system("pause");
            system("cls");
        }
}

//A FUN��O A SEGUIR IR� SOLICITAR AO USU�RIO QUE INFORME O NOME SOCIAL DE ALGUM FORNECEDOR,
//UTILIZANDO UMA VARI�VEL DE TIPO "BOOL" ELE IR� PERCORRER TODO O VETOR PROCURANDO
//A STRING DE NOME SOCIAL NAS ESTRUTURAS QUE SEJA SEMELHANTE A STRING QUE FOI LIDA NO NOME SOCIAL
//INFORMADO PELO USU�RIO, CASO O FORNECEDOR N�O ESTEJA CADASTRADO OU O USU�RIO TENHA INSERIDO
//ALGUMA INFORMA��O INCORRETA O MESMO SER� NOTIFICADO QUE O FORNECEDOR N�O FOI ENCONTRADO E
//IR� RETORNAR AO MENU PRINCIPAL, CASO O USU�RIO TENHA INSERIDO UMA INFORMA��O V�LIDA, O MESMO
//TER� DE INFORMAR OS DADOS QUE DESEJA QUE SEJAM ALTERADOS E AP�S ISSO RETORNAR�
//AO MENU PRINCIPAL.

void alterarcadastroFornecedor(cadForn cfo[100]){

    char nome_s[50];
    int i, tamanho = 100;
    bool achou;

        fflush(stdin);
        printf("Informe o nome social do fornecedor: ");
        gets(nome_s);
        strlwr(nome_s);
        achou = false;
        for (i = 0; i < tamanho && achou == false; i++){
            if (strcmp(nome_s, cfo[i].nome) == 0){
                achou = true;
                    fflush(stdin);
                    printf("\n=============ALTERAR CADASTRO DE FORNECEDORES============\n\n");
                    printf("Informe o novo e-mail do fornecedor: ");
                    gets(cfo[i].e_mail);
                    strlwr(cfo[i].e_mail);
                    fflush(stdin);
                    printf("Informe o novo valor aproximado de despesa fixa (R$): ");
                    scanf("%f", &cfo[i].des_fixa);
                    fflush(stdin);
                    printf("Informe o novo telefone do fornecedor: ");
                    gets(cfo[i].telefone);
                    strlwr(cfo[i].telefone);
                    fflush(stdin);
                    printf("Informe a nova cidade do fornecedor: ");
                    gets(cfo[i].cidade);
                    strlwr(cfo[i].cidade);
                    fflush(stdin);
                    printf("Informe o novo estado do fornecedor: ");
                    gets(cfo[i].estado);
                    strlwr(cfo[i].estado);
                    fflush(stdin);
                    printf("Informe o novo endere�o do fornecedor: ");
                    gets(cfo[i].rua);
                    strlwr(cfo[i].rua);
                    fflush(stdin);
                    printf("Informe o novo bairro do fornecedor: ");
                    gets(cfo[i].bairro);
                    strlwr(cfo[i].bairro);
                    fflush(stdin);
                    printf("Informe o novo N� do fornecedor: ");
                    scanf("%d", &cfo[i].num);
                    fflush(stdin);
                    printf("\n=============CADASTRO ALTERADO COM SUCESSO============\n\n");
                    system("pause");
                    system("cls");
            }
        }
        if(achou == false){
            printf("\nNenhum fornecedor foi encontrado!\n\n");
            printf("\n\n");
            system("pause");
            system("cls");
        }
}

//A FUN��O A SEGUIR IR� LER TODO O VETOR DE ESTRUTURAS UTILIZANDO UM LA�O
//DE REPETI��O "FOR", CASO N�O TENHA SIDO EFETUADO NENHUM CADASTRO O USU�RIO
//SER� NOTIFICADO QUE NENHUM VE�CULO FOI CADASTRADO, CASO UM OU MAIS CADASTROS
//TENHAM SIDO FEITOS, SER� EXIBIDO TUDO O QUE FOI CADASTRADO REFERENTE AOS
//VE�CULOS, AP�S TODAS AS INFORMA��ES SEREM EXIBIDAS, O USU�RIO SER� DIRECIONADO
//AO MENU PRINCIPAL NOVAMENTE.

void exibeCadastroVeiculo(cadVei cv[100], int cv_feito){

    int i;

        if(cv_feito == 0){
            printf("Nenhum ve�culo cadastrado!\n\n");
        }

    for(i = 0; i < cv_feito; i++){
        fflush(stdin);
        printf("==============VE�CULO CADASTRADO=============\n\n");
        printf("Placa do ve�culo: %s\n", cv[i].placa);
        fflush(stdin);
        printf("Fabricante do ve�culo: %s\n", cv[i].fabricante);
        fflush(stdin);
        printf("Modelo do ve�culo: %s\n", cv[i].modelo);
        fflush(stdin);
        printf("Ano do ve�culo: %d\n", cv[i].ano);
        fflush(stdin);
        printf("Chassi do ve�culo: %s\n", cv[i].chassi);
        fflush(stdin);
        printf("Kilometragem: %.2f\n", cv[i].km);
        fflush(stdin);
        printf("Local de sa�da: %s\n", cv[i].loc_saida);
        fflush(stdin);
        printf("Local de chegada: %s\n", cv[i].loc_chegada);
        fflush(stdin);
        printf("Quantidade de viagens: %d\n", cv[i].qtd_viagem);
        fflush(stdin);
        printf("Valor por viagem: %.2f\n", cv[i].valor_viagem);
        fflush(stdin);
        printf("\n");
        printf("=============================================\n\n");
    }
        system("pause");
        system("cls");
}

//A FUN��O A SEGUIR IR� LER TODO O VETOR DE ESTRUTURAS UTILIZANDO UM LA�O
//DE REPETI��O "FOR", CASO N�O TENHA SIDO EFETUADO NENHUM CADASTRO O USU�RIO
//SER� NOTIFICADO QUE NENHUM FUNCION�RIO FOI CADASTRADO, CASO UM OU MAIS CADASTROS
//TENHAM SIDO FEITOS, SER� EXIBIDO TUDO O QUE FOI CADASTRADO REFERENTE AOS
//FUNCION�RIOS, AP�S TODAS AS INFORMA��ES SEREM EXIBIDAS, O USU�RIO SER� DIRECIONADO
//AO MENU PRINCIPAL NOVAMENTE.

void exibeCadastroFuncionario(cadFunc cf[100], int cf_feito){

    int i;

        if(cf_feito == 0){
            printf("Nenhum funcion�rio cadastrado!\n\n");
        }

    for(i = 0; i < cf_feito; i++){
        fflush(stdin);
        printf("===========FUNCION�RIO CADASTRADO==========\n\n");
        printf("Nome do funcion�rio: %s\n", cf[i].nome);
        fflush(stdin);
        printf("Fun��o do funcion�rio: %s\n", cf[i].funcao);
        fflush(stdin);
        printf("Sal�rio do funcion�rio: R$%.2f\n", cf[i].salario);
        fflush(stdin);
        printf("CPF do funcion�rio: %s\n", cf[i].cpf);
        fflush(stdin);
        printf("Sexo do funcion�rio: %s\n", cf[i].sexo);
        fflush(stdin);
        printf("Naturalidade do funcion�rio: %s\n", cf[i].naturalidade);
        fflush(stdin);
        printf("N�mero de telefone do funcion�rio: %s\n", cf[i].telefone);
        fflush(stdin);
        printf("Cidade do funcion�rio: %s\n", cf[i].cidade);
        fflush(stdin);
        printf("Estado: %s\n", cf[i].estado);
        fflush(stdin);
        printf("Endere�o do funcion�rio: %s\n", cf[i].rua);
        fflush(stdin);
        printf("Bairro do funcion�rio: %s\n", cf[i].bairro);
        fflush(stdin);
        printf("N�: %d\n", cf[i].num);
        printf("\n");
        printf("=============================================\n\n");
    }
        system("pause");
        system("cls");
}

//A FUN��O A SEGUIR IR� LER TODO O VETOR DE ESTRUTURAS UTILIZANDO UM LA�O
//DE REPETI��O "FOR", CASO N�O TENHA SIDO EFETUADO NENHUM CADASTRO O USU�RIO
//SER� NOTIFICADO QUE NENHUM FORNECEDOR FOI CADASTRADO, CASO UM OU MAIS CADASTROS
//TENHAM SIDO FEITOS, SER� EXIBIDO TUDO O QUE FOI CADASTRADO REFERENTE AOS
//FORNECEDORES, AP�S TODAS AS INFORMA��ES SEREM EXIBIDAS, O USU�RIO SER� DIRECIONADO
//AO MENU PRINCIPAL NOVAMENTE.

void exibeCadastroFornecedor(cadForn cfo[100], int cfo_feito){

    int i;

        if(cfo_feito == 0){
            printf("Nenhum fornecedor cadastrado!\n\n");
        }

    for(i = 0; i < cfo_feito; i++){
        fflush(stdin);
        printf("===========FORNECEDOR CADASTRADO==========\n\n");
        printf("Nome social do fornecedor: %s\n", cfo[i].nome);
        fflush(stdin);
        printf("CNPJ do fornecedor: %s\n", cfo[i].cnpj);
        fflush(stdin);
        printf("Valor aproximado de despesa fixa: R$%.2f\n", cfo[i].des_fixa);
        fflush(stdin);
        printf("Ramo de atividade: %s\n", cfo[i].ram_ativ);
        fflush(stdin);
        printf("E-mail do fornecedor: %s\n", cfo[i].e_mail);
        fflush(stdin);
        printf("N�mero para contato: %s\n", cfo[i].telefone);
        fflush(stdin);
        printf("Cidade do fornecedor: %s\n", cfo[i].cidade);
        fflush(stdin);
        printf("Estado do fornecedor: %s\n", cfo[i].estado);
        fflush(stdin);
        printf("Endere�o do fornecedor: %s\n", cfo[i].rua);
        fflush(stdin);
        printf("Bairro: %s\n", cfo[i].bairro);
        fflush(stdin);
        printf("N�: %d\n", cfo[i].num);
        printf("\n");
        printf("=========================================\n\n");
    }
        system("pause");
        system("cls");
}

//A FUN��O A SEGUIR IR� RECEBER UMA PASSAGEM DE PAR�METROS QUE INFORMA
//A QUANTIDADE DE CADASTROS DE FUNCION�RIOS QUE FORAM REALIZADOS E SER�
//EXIBIDO NA TELA DO USU�RIO A QUANTIDADE DE FUNCION�RIOS QUE EST�O ATIVOS
//NA EMPRESA, ENQUANTO ISSO O PROGRAMA ESTAR� LENDO TODOS OS CAMPOS DE SAL�RIO
//DENTRO DO VETOR DE ESTRUTURAS E ESTAR� EFETUANDO UMA SOMA ACUMULADA, E ENT�O SER�
//EXIBIDO AO USU�RIO O VALOR DA FOLHA SALARIAL DA EMPRESA. AP�S ISSO RETORNAR�
//AO MENU PRINCIPAL.

void folhaSalarial(cadFunc cf[100], int cf_feito){

    int i;
    float soma = 0;

    for(i = 0; i < cf_feito; i++){
        fflush(stdin);
        soma = soma + cf[i].salario;
    }
        printf("===============FOLHA SALARIAL DA EMPRESA==============\n\n");
        printf("A empresa possui um total de %d funcion�rios ativos.\n\n", cf_feito);
        printf("O atual valor da folha salarial � de: R$%.2f\n\n", soma);
        printf("======================================================\n\n");
        system("pause");
        system("cls");
}

//A FUN��O A SEGUIR IR� RECEBER UMA PASSAGEM DE PAR�METROS QUE INFORMA
//A QUANTIDADE DE CADASTROS DE FORNECEDORES QUE FORAM REALIZADOS E SER�
//EXIBIDO NA TELA DO USU�RIO A QUANTIDADE DE FORNECEDORES QUE EST�O ATIVOS
//NA EMPRESA, ENQUANTO ISSO O PROGRAMA ESTAR� LENDO TODOS OS CAMPOS DE DESPESAS
//FIXAS DENTRO DO VETOR DE ESTRUTURAS E ESTAR� EFETUANDO UMA SOMA ACUMULADA, E ENT�O SER�
//EXIBIDO AO USU�RIO O VALOR APROXIMADO DE TODAS AS DESPESAS FIXAS DA EMPRESA. AP�S ISSO
//RETORNAR� AO MENU PRINCIPAL.

void despesaFixa(cadForn cfo[100], int cfo_feito){

    int i;
    float soma = 0;

    for(i = 0; i < cfo_feito; i++){
        fflush(stdin);
        soma = soma + cfo[i].des_fixa;
    }
        printf("===============VALOR APROXIMADO DE DESPESAS FIXAS==============\n\n");
        printf("A empresa possui um total de %d fornecedores ativos.\n\n", cfo_feito);
        printf("O valor das despesas fixas � de aproximadamente: R$%.2f\n\n", soma);
        printf("===============================================================\n\n");
        system("pause");
        system("cls");
}

//A FUN��O A SEGUIR IR� RECEBER UMA PASSAGEM DE PAR�METROS QUE INFORMA
//A QUANTIDADE DE CADASTROS DE VE�CULOS QUE FORAM REALIZADOS E SER�
//EXIBIDO NA TELA DO USU�RIO A QUANTIDADE DE VE�CULOS QUE EST�O ATIVOS
//NA EMPRESA, ENQUANTO ISSO O PROGRAMA ESTAR� FAZENDO A SEGUINTE LEITURA
//A SOMA IR� RECEBER (QUANTIDADE DE VIAGENS x VALOR DAS VIAGENS) DE CADA VE�CULO
//CADASTRADO E ESTAR� FAZENDO UMA SOMA ACUMULADA EM CIMA DESSAS INFORMA��ES,
//SER� EXIBIDO O VALOR DESSA SOMA ACUMULADA AO USU�RIO COMO SE FOSSE O LUCRO
//ESPERADO DE TODA A FROTA DE CAMINH�ES CADASTRADOS AP�S ISSO RETORNAR� AO MENU
//PRINCIPAL.

void valorLucro(cadVei cv[100], int cv_feito){

    int i;
    float soma = 0;

    for(i = 0; i < cv_feito; i++){
        soma = (cv[i].qtd_viagem * cv[i].valor_viagem) + soma;
    }
        printf("====================VALOR APROXIMADO DOS LUCROS====================\n\n");
        printf("A empresa possui um total de %d ve�culos ativos.\n\n", cv_feito);
        printf("A empresa espera um lucro avaliado em: R$%.2f\n\n", soma);
        printf("===================================================================\n\n");
        system("pause");
        system("cls");
}

//A FUN��O A SEGUIR IR� RECEBER USUARIOS E SENHAS PREDEFINIDAS PARA QUE
//NO PROGRAMA PRINCIPAL SEJA FEITO O LOGIN DE SEUS RESPECTIVOS USU�RIOS
//O USU�RIO TER� QUE INSERIR SUAS INFORMA��ES DE LOGIN, CASO AS INFORMA��ES
//INSERIDAS PELO USU�RIO, SEJAM IGUAIS AS QUE FORAM PREDEFINIDAS O MESMO
//IR� SEGUIR PARA O MENU, CASO AS INFORMA��ES SEJAM DIVERGENTES, O USU�RIO
//TER� DE INSERIR NOVAMENTE AS INFORMA��ES DE LOGIN AT� QUE SEJAM CORRETAS.

void efetuarLogin(){
    login L[1];

    char usuario[16];
    char senha[16];

    strcpy(L[0].usuario, "Admin");
    strcpy(L[0].senha, "000000");

    do{
        printf("====================LOGIN====================\n\n");
        printf("LOGIN: ");
        scanf("%s", usuario);
        printf("SENHA: ");
        scanf("%s", senha);

        if ((strcmp(usuario, L[0].usuario) == 0) && (strcmp(senha, L[0].senha) == 0))
            printf("\n===============USU�RIO  LOGADO===============\a\n\n");
        else{
            printf("\n========USU�RIO E/OU SENHA INCORRETOS========\a\n\n");
            system("pause");
            system("cls");
        }
    }while(strcmp(usuario, L[0].usuario) != 0 || strcmp(senha, L[0].senha) != 0);
        system("pause");
        system("cls");
}

//PROGRAMA PRINCIPAL

//SER� EXIBIDO UM MENU AO USU�RIO PELO LA�O DE REPETI��O "DO WHILE" ONDE O USU�RIO
//TER� DE INFORMAR A OP��O QUE DESEJA DENTRO DO PROGRAMA PARA QUE SUAS ATIVIDADES
//SEJAM EXECUTADAS, AS OP��ES INSERIDAS SER�O DE 1 A 12, PARA EXECUTAR AS FUN��ES
//QUE FORAM CODIFICADAS ANTERIORMENTE, CASO O USU�RIO DECLARE ALGUM VALOR QUE N�O
//SEJA OS N�MEROS DE 1 A 12 E NEM O NUMERO 0, ELE "CAIR�" NO DEFAULT E SER� INFORMADO
//QUE O USU�RIO PRECISA INSERIR UMA INFORMA��O V�LIDA O "DO WHILE" TEM COMO CONDI��O,
//FA�A ENQUANTO A OP��O FOR DIFERENTE DE 0, CASO SEJA 0, O PROGRAMA SE ENCERRAR�.

void main(){
    setlocale(LC_ALL, "Portuguese");

    cadVei cv[100];
    cadFunc cf[100];
    cadForn cfo[100];
    int opcao, cv_feito, cf_feito, cfo_feito;

    efetuarLogin();

    do{
        printf("====================BEM - VINDO===================\n\n\n");
        printf("=================MENU DE CADASTRO=================\n\n");
        printf("[1]Cadastro de ve�culos\n");
        printf("[2]Cadastro de funcion�rios\n");
        printf("[3]Cadastro de fornecedores\n\n");
        printf("================ATUALIZAR CADASTRO================\n\n");
        printf("[4]Atualizar dados de ve�culos\n");
        printf("[5]Atualizar dados de funcion�rios\n");
        printf("[6]Atualizar dados de fornecedores\n\n");
        printf("====================RELAT�RIOS====================\n\n");
        printf("[7]Relat�rio de cadastro de ve�culos\n");
        printf("[8]Relat�rio de cadastro de funcion�rios\n");
        printf("[9]Relat�rio de cadastro de fornecedores\n\n");
        printf("=================LUCROS E DESPESAS================\n\n");
        printf("[10]Valor da folha salarial\n");
        printf("[11]Valor das despesas fixas\n");
        printf("[12]Lucro esperado\n\n");
        printf("==================================================\n\n");
        printf("[0]Sair\n\n");
        printf("==================================================\n\n");
        printf("Escolha uma op��o v�lida: ");
        scanf("%d", &opcao);
        printf("\n");
        switch(opcao){

            case 1: system("pause");
                    system("cls");
                    cv_feito = cadastroVeiculo(cv);
                    break;

            case 2: system("pause");
                    system("cls");
                    cf_feito = cadastroFuncionario(cf);
                    break;

            case 3: system("pause");
                    system("cls");
                    cfo_feito = cadastroFornecedor(cfo);
                    break;

            case 4: system("pause");
                    system("cls");
                    alterarcadastroVeiculo(cv);
                    break;

            case 5: system("pause");
                    system("cls");
                    alterarcadastroFuncionario(cf);
                    break;

            case 6: system("pause");
                    system("cls");
                    alterarcadastroFornecedor(cfo);
                    break;

            case 7: system("pause");
                    system("cls");
                    exibeCadastroVeiculo(cv, cv_feito);
                    break;

            case 8: system("pause");
                    system("cls");
                    exibeCadastroFuncionario(cf, cf_feito);
                    break;

            case 9: system("pause");
                    system("cls");
                    exibeCadastroFornecedor(cfo, cfo_feito);
                    break;

            case 10: system("pause");
                     system("cls");
                     folhaSalarial(cf, cf_feito);
                     break;

            case 11: system("pause");
                     system("cls");
                     despesaFixa(cfo, cfo_feito);
                     break;

            case 12: system("pause");
                     system("cls");
                     valorLucro(cv, cv_feito);
                     break;

            case 0: printf("\nPrograma finalizado!\n\n");
                    system ("pause");
                    system ("cls");
                    break;

            default: printf("\nOp��o inv�lida. Tenve novamente!!!\n\n");
                     system ("pause");
                     system ("cls");
        }

    }while (opcao != 0);
}
