#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <stdbool.h>

//DEFINIÇÃO DE ESTRUTURA PARA SISTEMA DE LOGIN.

typedef struct{
    char usuario[16];
    char senha[16];
} login;

//DEFINIÇÃO DE ESTRUTURA PARA CADASTRO DE VEÍCULOS.

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

//DEFINIÇÃO DE ESTRUTURA PARA CADASTRO DE FUNCIONÁRIOS.

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

//DEFINIÇÃO DE ESTRUTURA PARA CADASTRO DE FORNECEDORES.

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

//A FUNÇÃO A SEGUIR COLETA TODOS OS DADOS NECESSÁRIOS PARA FAZER O CADASTRO
//DE DETERMINADO VEÍCULO E OS ARMAZENA EM UM VETOR DE ESTRUTURAS DE 100 POSIÇÕES
//PARA QUE FUTURAMENTE SEJA CALCULADO OS LUCROS DE TODA A EMPRESA SENDO EXIBIDO
//COMO RELATÓRIO QUANDO SOLICITADO, APÓS A COLETA DOS DADOS SERÁ QUESTIONADO SE O
//USUÁRIO DESEJA FAZER UM NOVO CADASTRO, CASO A RESPOSTA SEJA SIM, SERÁ NECESSÁRIO
//INFORMAR NOVAMENTE TODOS OS DADOS. CASO A RESPOSTA SEJA NÃO, ELE IRÁ RETORNAR AO
//MENU PRINCIPAL.

int cadastroVeiculo(cadVei cv[100]){

    int i = 0, cv_feito = 0, tamanho = 100;
    char resposta;

    do{
        fflush(stdin);
        printf("=================CADASTRO DE VEÍCULOS================\n\n");
        printf("Informe a placa do veículo: ");
        gets(cv[i].placa);
        strlwr(cv[i].placa);
        fflush(stdin);
        printf("Informe o fabricante do veículo: ");
        gets(cv[i].fabricante);
        strlwr(cv[i].fabricante);
        fflush(stdin);
        printf("Informe o modelo do veículo: ");
        gets(cv[i].modelo);
        strlwr(cv[i].modelo);
        fflush(stdin);
        printf("Informe o ano do veículo: ");
        scanf("%d", &cv[i].ano);
        fflush(stdin);
        printf("Informe o chassi do veículo: ");
        gets(cv[i].chassi);
        strlwr(cv[i].chassi);
        fflush(stdin);
        printf("Informe a kilometragem: ");
        scanf("%f", &cv[i].km);
        fflush(stdin);
        printf("Informe o local de saída: ");
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

//A FUNÇÃO A SEGUIR COLETA TODOS OS DADOS NECESSÁRIOS PARA FAZER O CADASTRO
//DE DETERMINADO FUNCIONÁRIO E OS ARMAZENA EM UM VETOR DE ESTRUTURAS DE 100 POSIÇÕES
//PARA QUE FUTURAMENTE SEJA CALCULADO A FOLHA SALARIAL DE TODA A EMPRESA SENDO EXIBIDA
//COMO RELATÓRIO QUANDO SOLICITADO, APÓS A COLETA DOS DADOS SERÁ QUESTIONADO SE O
//USUÁRIO DESEJA FAZER UM NOVO CADASTRO, CASO A RESPOSTA SEJA SIM, SERÁ NECESSÁRIO
//INFORMAR NOVAMENTE TODOS OS DADOS. CASO A RESPOSTA SEJA NÃO, ELE IRÁ RETORNAR AO
//MENU PRINCIPAL.

int cadastroFuncionario(cadFunc cf[100]){

    int i = 0, cf_feito = 0, tamanho = 100;
    char resposta;

    do{
        fflush(stdin);
        printf("================CADASTRO DE FUNCIONÁRIOS===============\n\n");
        printf("Informe o nome do funcionário: ");
        gets(cf[i].nome);
        strlwr(cf[i].nome);
        fflush(stdin);
        printf("Informe a funcao do funcionário: ");
        gets(cf[i].funcao);
        strlwr(cf[i].funcao);
        fflush(stdin);
        printf("Informe o salário do funcionário (R$): ");
        scanf("%f", &cf[i].salario);
        fflush(stdin);
        printf("Informe o CPF do funcionário: ");
        gets(cf[i].cpf);
        strlwr(cf[i].cpf);
        fflush(stdin);
        printf("Informe o sexo do funcionário: ");
        gets(cf[i].sexo);
        strlwr(cf[i].sexo);
        fflush(stdin);
        printf("Informe a naturalidade do funcionário: ");
        gets(cf[i].naturalidade);
        strlwr(cf[i].naturalidade);
        fflush(stdin);
        printf("Informe o número de telefone do funcionário: ");
        gets(cf[i].telefone);
        strlwr(cf[i].telefone);
        fflush(stdin);
        printf("Informe a cidade do funcionário: ");
        gets(cf[i].cidade);
        strlwr(cf[i].cidade);
        fflush(stdin);
        printf("Informe o estado: ");
        gets(cf[i].estado);
        strlwr(cf[i].estado);
        fflush(stdin);
        printf("Informe o endereço do funcionário : ");
        gets(cf[i].rua);
        strlwr(cf[i].rua);
        fflush(stdin);
        printf("Informe o bairro do funcionário: ");
        gets(cf[i].bairro);
        strlwr(cf[i].bairro);
        fflush(stdin);
        printf("Informe o Nº: ");
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

//A FUNÇÃO A SEGUIR COLETA TODOS OS DADOS NECESSÁRIOS PARA FAZER O CADASTRO
//DE DETERMINADO FORNECEDOR E OS ARMAZENA EM UM VETOR DE ESTRUTURAS DE 100 POSIÇÕES
//PARA QUE FUTURAMENTE SEJA CALCULADO AS DESPESAS FIXAS DE TODA A EMPRESA SENDO EXIBIDA
//COMO RELATÓRIO QUANDO SOLICITADO, APÓS A COLETA DOS DADOS SERÁ QUESTIONADO SE O
//USUÁRIO DESEJA FAZER UM NOVO CADASTRO, CASO A RESPOSTA SEJA SIM, SERÁ NECESSÁRIO
//INFORMAR NOVAMENTE TODOS OS DADOS. CASO A RESPOSTA SEJA NÃO, ELE IRÁ RETORNAR AO
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
        printf("Informe um número de telefone para contato: ");
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
        printf("Informe o endereço do fornecedor: ");
        gets(cfo[i].rua);
        strlwr(cfo[i].rua);
        fflush(stdin);
        printf("Informe o bairro do fornecedor: ");
        gets(cfo[i].bairro);
        strlwr(cfo[i].bairro);
        fflush(stdin);
        printf("Informe o Nº: ");
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

//A FUNÇÃO A SEGUIR IRÁ SOLICITAR AO USUÁRIO QUE INFORME A PLACA DE ALGUM VEÍCULO,
//UTILIZANDO UMA VARIÁVEL DE TIPO "BOOL" ELE IRÁ PERCORRER TODO O VETOR PROCURANDO
//A STRING DE PLACA NAS ESTRUTURAS QUE SEJA SEMELHANTE A STRING QUE FOI LIDA NA PLACA
//INFORMADA PELO USUÁRIO, CASO O VEÍCULO NÃO ESTEJA CADASTRADO OU O USUÁRIO TENHA INSERIDO
//ALGUMA INFORMAÇÃO INCORRETA O MESMO SERÁ NOTIFICADO QUE O VEÍCULO NÃO FOI ENCONTRADO E
//IRÁ RETORNAR AO MENU PRINCIPAL, CASO O USUÁRIO TENHA INSERIDO UMA INFORMAÇÃO VÁLIDA, O MESMO
//TERÁ DE INFORMAR OS DADOS QUE DESEJA QUE SEJAM ALTERADOS E APÓS ISSO RETORNARÁ
//AO MENU PRINCIPAL.

void alterarcadastroVeiculo(cadVei cv[100]){

    char placa[20];
    int i, tamanho = 100;
    bool achou;

        fflush(stdin);
        printf("Informe a placa do veículo: ");
        gets(placa);
        strlwr(placa);
        achou = false;
        for (i = 0; i < tamanho && achou == false; i++){
            if (strcmp(placa, cv[i].placa) == 0){
                achou = true;
                    fflush(stdin);
                    printf("\n=============ALTERAR CADASTRO DE VEÍCULOS============\n\n");
                    printf("Informe a atual kilometragem: ");
                    scanf("%f", &cv[i].km);
                    fflush(stdin);
                    printf("Informe o novo local de saída: ");
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
            printf("\nNenhum veículo foi encontrado!\n\n");
            printf("\n\n");
            system("pause");
            system("cls");
        }
}

//A FUNÇÃO A SEGUIR IRÁ SOLICITAR AO USUÁRIO QUE INFORME O NOME DE ALGUM FUNCIONÁRIO,
//UTILIZANDO UMA VARIÁVEL DE TIPO "BOOL" ELE IRÁ PERCORRER TODO O VETOR PROCURANDO
//A STRING DE NOME NAS ESTRUTURAS QUE SEJA SEMELHANTE A STRING QUE FOI LIDA NO NOME
//INFORMADO PELO USUÁRIO, CASO O FUNCIONÁRIO NÃO ESTEJA CADASTRADO OU O USUÁRIO TENHA INSERIDO
//ALGUMA INFORMAÇÃO INCORRETA O MESMO SERÁ NOTIFICADO QUE O FUNCIONÁRIO NÃO FOI ENCONTRADO E
//IRÁ RETORNAR AO MENU PRINCIPAL, CASO O USUÁRIO TENHA INSERIDO UMA INFORMAÇÃO VÁLIDA, O MESMO
//TERÁ DE INFORMAR OS DADOS QUE DESEJA QUE SEJAM ALTERADOS E APÓS ISSO RETORNARÁ
//AO MENU PRINCIPAL.

void alterarcadastroFuncionario(cadFunc cf[100]){

    char nome[50];
    int i, tamanho = 100;
    bool achou;

        fflush(stdin);
        printf("Informe o nome do funcionário: ");
        gets(nome);
        strlwr(nome);
        achou = false;
        for (i = 0; i < tamanho && achou == false; i++){
            if (strcmp(nome, cf[i].nome) == 0){
                achou = true;
                    fflush(stdin);
                    printf("\n=============ALTERAR CADASTRO DE FUNCIONÁRIOS============\n\n");
                    printf("Informe a alteração de nome do funcionário: ");
                    gets(cf[i].nome);
                    strlwr(cf[i].nome);
                    fflush(stdin);
                    printf("Informe a alteração de função do funcionário: ");
                    gets(cf[i].funcao);
                    strlwr(cf[i].funcao);
                    fflush(stdin);
                    printf("Informe a alteração salarial do funcionário: ");
                    scanf("%f", &cf[i].salario);
                    fflush(stdin);
                    printf("Informe o novo número de telefone do funcionário: ");
                    gets(cf[i].telefone);
                    strlwr(cf[i].telefone);
                    fflush(stdin);
                    printf("Informe a nova cidade do funcionário: ");
                    gets(cf[i].cidade);
                    strlwr(cf[i].cidade);
                    fflush(stdin);
                    printf("Informe o novo estado do funcionário: ");
                    gets(cf[i].estado);
                    strlwr(cf[i].estado);
                    fflush(stdin);
                    printf("Informe o novo endereço do funcionário: ");
                    gets(cf[i].rua);
                    strlwr(cf[i].rua);
                    fflush(stdin);
                    printf("Informe o novo bairro do funcionário: ");
                    gets(cf[i].bairro);
                    strlwr(cf[i].bairro);
                    fflush(stdin);
                    printf("Informe o novo Nº do funcionário: ");
                    scanf("%d", &cf[i].num);
                    fflush(stdin);
                    printf("\n===============CADASTRO ALTERADO COM SUCESSO=============\n\n");
                    system("pause");
                    system("cls");
            }
        }
        if(achou == false){
            printf("\nNenhum funcionário foi encontrado!\n\n");
            printf("\n\n");
            system("pause");
            system("cls");
        }
}

//A FUNÇÃO A SEGUIR IRÁ SOLICITAR AO USUÁRIO QUE INFORME O NOME SOCIAL DE ALGUM FORNECEDOR,
//UTILIZANDO UMA VARIÁVEL DE TIPO "BOOL" ELE IRÁ PERCORRER TODO O VETOR PROCURANDO
//A STRING DE NOME SOCIAL NAS ESTRUTURAS QUE SEJA SEMELHANTE A STRING QUE FOI LIDA NO NOME SOCIAL
//INFORMADO PELO USUÁRIO, CASO O FORNECEDOR NÃO ESTEJA CADASTRADO OU O USUÁRIO TENHA INSERIDO
//ALGUMA INFORMAÇÃO INCORRETA O MESMO SERÁ NOTIFICADO QUE O FORNECEDOR NÃO FOI ENCONTRADO E
//IRÁ RETORNAR AO MENU PRINCIPAL, CASO O USUÁRIO TENHA INSERIDO UMA INFORMAÇÃO VÁLIDA, O MESMO
//TERÁ DE INFORMAR OS DADOS QUE DESEJA QUE SEJAM ALTERADOS E APÓS ISSO RETORNARÁ
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
                    printf("Informe o novo endereço do fornecedor: ");
                    gets(cfo[i].rua);
                    strlwr(cfo[i].rua);
                    fflush(stdin);
                    printf("Informe o novo bairro do fornecedor: ");
                    gets(cfo[i].bairro);
                    strlwr(cfo[i].bairro);
                    fflush(stdin);
                    printf("Informe o novo Nº do fornecedor: ");
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

//A FUNÇÃO A SEGUIR IRÁ LER TODO O VETOR DE ESTRUTURAS UTILIZANDO UM LAÇO
//DE REPETIÇÃO "FOR", CASO NÃO TENHA SIDO EFETUADO NENHUM CADASTRO O USUÁRIO
//SERÁ NOTIFICADO QUE NENHUM VEÍCULO FOI CADASTRADO, CASO UM OU MAIS CADASTROS
//TENHAM SIDO FEITOS, SERÁ EXIBIDO TUDO O QUE FOI CADASTRADO REFERENTE AOS
//VEÍCULOS, APÓS TODAS AS INFORMAÇÕES SEREM EXIBIDAS, O USUÁRIO SERÁ DIRECIONADO
//AO MENU PRINCIPAL NOVAMENTE.

void exibeCadastroVeiculo(cadVei cv[100], int cv_feito){

    int i;

        if(cv_feito == 0){
            printf("Nenhum veículo cadastrado!\n\n");
        }

    for(i = 0; i < cv_feito; i++){
        fflush(stdin);
        printf("==============VEÍCULO CADASTRADO=============\n\n");
        printf("Placa do veículo: %s\n", cv[i].placa);
        fflush(stdin);
        printf("Fabricante do veículo: %s\n", cv[i].fabricante);
        fflush(stdin);
        printf("Modelo do veículo: %s\n", cv[i].modelo);
        fflush(stdin);
        printf("Ano do veículo: %d\n", cv[i].ano);
        fflush(stdin);
        printf("Chassi do veículo: %s\n", cv[i].chassi);
        fflush(stdin);
        printf("Kilometragem: %.2f\n", cv[i].km);
        fflush(stdin);
        printf("Local de saída: %s\n", cv[i].loc_saida);
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

//A FUNÇÃO A SEGUIR IRÁ LER TODO O VETOR DE ESTRUTURAS UTILIZANDO UM LAÇO
//DE REPETIÇÃO "FOR", CASO NÃO TENHA SIDO EFETUADO NENHUM CADASTRO O USUÁRIO
//SERÁ NOTIFICADO QUE NENHUM FUNCIONÁRIO FOI CADASTRADO, CASO UM OU MAIS CADASTROS
//TENHAM SIDO FEITOS, SERÁ EXIBIDO TUDO O QUE FOI CADASTRADO REFERENTE AOS
//FUNCIONÁRIOS, APÓS TODAS AS INFORMAÇÕES SEREM EXIBIDAS, O USUÁRIO SERÁ DIRECIONADO
//AO MENU PRINCIPAL NOVAMENTE.

void exibeCadastroFuncionario(cadFunc cf[100], int cf_feito){

    int i;

        if(cf_feito == 0){
            printf("Nenhum funcionário cadastrado!\n\n");
        }

    for(i = 0; i < cf_feito; i++){
        fflush(stdin);
        printf("===========FUNCIONÁRIO CADASTRADO==========\n\n");
        printf("Nome do funcionário: %s\n", cf[i].nome);
        fflush(stdin);
        printf("Função do funcionário: %s\n", cf[i].funcao);
        fflush(stdin);
        printf("Salário do funcionário: R$%.2f\n", cf[i].salario);
        fflush(stdin);
        printf("CPF do funcionário: %s\n", cf[i].cpf);
        fflush(stdin);
        printf("Sexo do funcionário: %s\n", cf[i].sexo);
        fflush(stdin);
        printf("Naturalidade do funcionário: %s\n", cf[i].naturalidade);
        fflush(stdin);
        printf("Número de telefone do funcionário: %s\n", cf[i].telefone);
        fflush(stdin);
        printf("Cidade do funcionário: %s\n", cf[i].cidade);
        fflush(stdin);
        printf("Estado: %s\n", cf[i].estado);
        fflush(stdin);
        printf("Endereço do funcionário: %s\n", cf[i].rua);
        fflush(stdin);
        printf("Bairro do funcionário: %s\n", cf[i].bairro);
        fflush(stdin);
        printf("Nº: %d\n", cf[i].num);
        printf("\n");
        printf("=============================================\n\n");
    }
        system("pause");
        system("cls");
}

//A FUNÇÃO A SEGUIR IRÁ LER TODO O VETOR DE ESTRUTURAS UTILIZANDO UM LAÇO
//DE REPETIÇÃO "FOR", CASO NÃO TENHA SIDO EFETUADO NENHUM CADASTRO O USUÁRIO
//SERÁ NOTIFICADO QUE NENHUM FORNECEDOR FOI CADASTRADO, CASO UM OU MAIS CADASTROS
//TENHAM SIDO FEITOS, SERÁ EXIBIDO TUDO O QUE FOI CADASTRADO REFERENTE AOS
//FORNECEDORES, APÓS TODAS AS INFORMAÇÕES SEREM EXIBIDAS, O USUÁRIO SERÁ DIRECIONADO
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
        printf("Número para contato: %s\n", cfo[i].telefone);
        fflush(stdin);
        printf("Cidade do fornecedor: %s\n", cfo[i].cidade);
        fflush(stdin);
        printf("Estado do fornecedor: %s\n", cfo[i].estado);
        fflush(stdin);
        printf("Endereço do fornecedor: %s\n", cfo[i].rua);
        fflush(stdin);
        printf("Bairro: %s\n", cfo[i].bairro);
        fflush(stdin);
        printf("Nº: %d\n", cfo[i].num);
        printf("\n");
        printf("=========================================\n\n");
    }
        system("pause");
        system("cls");
}

//A FUNÇÃO A SEGUIR IRÁ RECEBER UMA PASSAGEM DE PARÂMETROS QUE INFORMA
//A QUANTIDADE DE CADASTROS DE FUNCIONÁRIOS QUE FORAM REALIZADOS E SERÁ
//EXIBIDO NA TELA DO USUÁRIO A QUANTIDADE DE FUNCIONÁRIOS QUE ESTÃO ATIVOS
//NA EMPRESA, ENQUANTO ISSO O PROGRAMA ESTARÁ LENDO TODOS OS CAMPOS DE SALÁRIO
//DENTRO DO VETOR DE ESTRUTURAS E ESTARÁ EFETUANDO UMA SOMA ACUMULADA, E ENTÃO SERÁ
//EXIBIDO AO USUÁRIO O VALOR DA FOLHA SALARIAL DA EMPRESA. APÓS ISSO RETORNARÁ
//AO MENU PRINCIPAL.

void folhaSalarial(cadFunc cf[100], int cf_feito){

    int i;
    float soma = 0;

    for(i = 0; i < cf_feito; i++){
        fflush(stdin);
        soma = soma + cf[i].salario;
    }
        printf("===============FOLHA SALARIAL DA EMPRESA==============\n\n");
        printf("A empresa possui um total de %d funcionários ativos.\n\n", cf_feito);
        printf("O atual valor da folha salarial é de: R$%.2f\n\n", soma);
        printf("======================================================\n\n");
        system("pause");
        system("cls");
}

//A FUNÇÃO A SEGUIR IRÁ RECEBER UMA PASSAGEM DE PARÂMETROS QUE INFORMA
//A QUANTIDADE DE CADASTROS DE FORNECEDORES QUE FORAM REALIZADOS E SERÁ
//EXIBIDO NA TELA DO USUÁRIO A QUANTIDADE DE FORNECEDORES QUE ESTÃO ATIVOS
//NA EMPRESA, ENQUANTO ISSO O PROGRAMA ESTARÁ LENDO TODOS OS CAMPOS DE DESPESAS
//FIXAS DENTRO DO VETOR DE ESTRUTURAS E ESTARÁ EFETUANDO UMA SOMA ACUMULADA, E ENTÃO SERÁ
//EXIBIDO AO USUÁRIO O VALOR APROXIMADO DE TODAS AS DESPESAS FIXAS DA EMPRESA. APÓS ISSO
//RETORNARÁ AO MENU PRINCIPAL.

void despesaFixa(cadForn cfo[100], int cfo_feito){

    int i;
    float soma = 0;

    for(i = 0; i < cfo_feito; i++){
        fflush(stdin);
        soma = soma + cfo[i].des_fixa;
    }
        printf("===============VALOR APROXIMADO DE DESPESAS FIXAS==============\n\n");
        printf("A empresa possui um total de %d fornecedores ativos.\n\n", cfo_feito);
        printf("O valor das despesas fixas é de aproximadamente: R$%.2f\n\n", soma);
        printf("===============================================================\n\n");
        system("pause");
        system("cls");
}

//A FUNÇÃO A SEGUIR IRÁ RECEBER UMA PASSAGEM DE PARÂMETROS QUE INFORMA
//A QUANTIDADE DE CADASTROS DE VEÍCULOS QUE FORAM REALIZADOS E SERÁ
//EXIBIDO NA TELA DO USUÁRIO A QUANTIDADE DE VEÍCULOS QUE ESTÃO ATIVOS
//NA EMPRESA, ENQUANTO ISSO O PROGRAMA ESTARÁ FAZENDO A SEGUINTE LEITURA
//A SOMA IRÁ RECEBER (QUANTIDADE DE VIAGENS x VALOR DAS VIAGENS) DE CADA VEÍCULO
//CADASTRADO E ESTARÁ FAZENDO UMA SOMA ACUMULADA EM CIMA DESSAS INFORMAÇÕES,
//SERÁ EXIBIDO O VALOR DESSA SOMA ACUMULADA AO USUÁRIO COMO SE FOSSE O LUCRO
//ESPERADO DE TODA A FROTA DE CAMINHÕES CADASTRADOS APÓS ISSO RETORNARÁ AO MENU
//PRINCIPAL.

void valorLucro(cadVei cv[100], int cv_feito){

    int i;
    float soma = 0;

    for(i = 0; i < cv_feito; i++){
        soma = (cv[i].qtd_viagem * cv[i].valor_viagem) + soma;
    }
        printf("====================VALOR APROXIMADO DOS LUCROS====================\n\n");
        printf("A empresa possui um total de %d veículos ativos.\n\n", cv_feito);
        printf("A empresa espera um lucro avaliado em: R$%.2f\n\n", soma);
        printf("===================================================================\n\n");
        system("pause");
        system("cls");
}

//A FUNÇÃO A SEGUIR IRÁ RECEBER USUARIOS E SENHAS PREDEFINIDAS PARA QUE
//NO PROGRAMA PRINCIPAL SEJA FEITO O LOGIN DE SEUS RESPECTIVOS USUÁRIOS
//O USUÁRIO TERÁ QUE INSERIR SUAS INFORMAÇÕES DE LOGIN, CASO AS INFORMAÇÕES
//INSERIDAS PELO USUÁRIO, SEJAM IGUAIS AS QUE FORAM PREDEFINIDAS O MESMO
//IRÁ SEGUIR PARA O MENU, CASO AS INFORMAÇÕES SEJAM DIVERGENTES, O USUÁRIO
//TERÁ DE INSERIR NOVAMENTE AS INFORMAÇÕES DE LOGIN ATÉ QUE SEJAM CORRETAS.

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
            printf("\n===============USUÁRIO  LOGADO===============\a\n\n");
        else{
            printf("\n========USUÁRIO E/OU SENHA INCORRETOS========\a\n\n");
            system("pause");
            system("cls");
        }
    }while(strcmp(usuario, L[0].usuario) != 0 || strcmp(senha, L[0].senha) != 0);
        system("pause");
        system("cls");
}

//PROGRAMA PRINCIPAL

//SERÁ EXIBIDO UM MENU AO USUÁRIO PELO LAÇO DE REPETIÇÃO "DO WHILE" ONDE O USUÁRIO
//TERÁ DE INFORMAR A OPÇÃO QUE DESEJA DENTRO DO PROGRAMA PARA QUE SUAS ATIVIDADES
//SEJAM EXECUTADAS, AS OPÇÕES INSERIDAS SERÃO DE 1 A 12, PARA EXECUTAR AS FUNÇÕES
//QUE FORAM CODIFICADAS ANTERIORMENTE, CASO O USUÁRIO DECLARE ALGUM VALOR QUE NÃO
//SEJA OS NÚMEROS DE 1 A 12 E NEM O NUMERO 0, ELE "CAIRÁ" NO DEFAULT E SERÁ INFORMADO
//QUE O USUÁRIO PRECISA INSERIR UMA INFORMAÇÃO VÁLIDA O "DO WHILE" TEM COMO CONDIÇÃO,
//FAÇA ENQUANTO A OPÇÃO FOR DIFERENTE DE 0, CASO SEJA 0, O PROGRAMA SE ENCERRARÁ.

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
        printf("[1]Cadastro de veículos\n");
        printf("[2]Cadastro de funcionários\n");
        printf("[3]Cadastro de fornecedores\n\n");
        printf("================ATUALIZAR CADASTRO================\n\n");
        printf("[4]Atualizar dados de veículos\n");
        printf("[5]Atualizar dados de funcionários\n");
        printf("[6]Atualizar dados de fornecedores\n\n");
        printf("====================RELATÓRIOS====================\n\n");
        printf("[7]Relatório de cadastro de veículos\n");
        printf("[8]Relatório de cadastro de funcionários\n");
        printf("[9]Relatório de cadastro de fornecedores\n\n");
        printf("=================LUCROS E DESPESAS================\n\n");
        printf("[10]Valor da folha salarial\n");
        printf("[11]Valor das despesas fixas\n");
        printf("[12]Lucro esperado\n\n");
        printf("==================================================\n\n");
        printf("[0]Sair\n\n");
        printf("==================================================\n\n");
        printf("Escolha uma opção válida: ");
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

            default: printf("\nOpção inválida. Tenve novamente!!!\n\n");
                     system ("pause");
                     system ("cls");
        }

    }while (opcao != 0);
}
