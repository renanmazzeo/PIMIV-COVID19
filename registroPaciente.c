#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "registroPaciente.h"

void cadastroPaciente(arquivo, op) {
    struct pacienteInfo pacInfo;
    do {
        arquivo = fopen("cadastro-paciente.txt", "a+");
        printf("\n Insira o nome do paciente: ");
        fflush(stdin);
        scanf("%[^\n]s", &pacInfo.nome);

        printf("\n Insira o CPF do paciente: ");
        fflush(stdin);
        scanf("%s", &pacInfo.cpf);

        printf("\n Insira o telefone do paciente: ");
        fflush(stdin);
        scanf("%s", &pacInfo.telefone);

        printf("\n Insira a rua da casa do paciente: ");
        fflush(stdin);
        scanf("%[^\n]s", &pacInfo.rua);

        printf("\n Insira o numero da casa do paciente: ");
        fflush(stdin);
        scanf("%s", &pacInfo.numero);

        printf("\n Insira o CEP do paciente: ");
        fflush(stdin);
        scanf("%s", &pacInfo.cep);

        printf("\n Insira o bairro do paciente: ");
        fflush(stdin);
        scanf("%[^\n]s", &pacInfo.bairro);

        printf("\n Insira a cidade do paciente: ");
        fflush(stdin);
        scanf("%[^\n]s", &pacInfo.cidade);

        printf("\n Insira o estado(uf) do paciente: ");
        fflush(stdin);
        scanf("%[^\n]s", &pacInfo.estado);


        printf("\n Insira a data de nascimento do paciente: ");
        printf("\n      Dia: ");
        fflush(stdin);
        scanf("%s", &pacInfo.diaNasc);

        printf("\n      Mes: ");
        fflush(stdin);
        scanf("%s", &pacInfo.mesNasc);

        printf("\n      Ano: ");
        fflush(stdin);
        scanf("%s", &pacInfo.anoNasc);

        printf("\n Insira o email do paciente: ");
        fflush(stdin);
        scanf("%s", &pacInfo.email);

        printf("\n Insira a data do diagnostico: ");
        printf("\n      Dia: ");
        fflush(stdin);
        scanf("%s", &pacInfo.diaDiag);

        printf("\n      Mes: ");
        fflush(stdin);
        scanf("%s", &pacInfo.mesDiag);

        printf("\n      Ano: ");
        fflush(stdin);
        scanf("%s", &pacInfo.anoDiag);

        printf("\n Insira a comorbidade do paciente (caso tenha digite 1, senao 0): ");
        fflush(stdin);
        scanf("%[^\n]s", &pacInfo.comorbidade);

        int comorbidadeInt = atoi(pacInfo.comorbidade);

        if(comorbidadeInt == 1) {
            printf("\n Quais sao as comorbidades: ");
            fflush(stdin);
            scanf("%[^\n]s", &pacInfo.comorbidade);
        }

        fprintf(arquivo, "\n\nNome: %s", pacInfo.nome);
        fprintf(arquivo, "\nCPF: %s", pacInfo.cpf);
        fprintf(arquivo, "\nTelefone: %s", pacInfo.telefone);
        fprintf(arquivo, "\nEndereço: Bairro %s, rua %s, numero %s", pacInfo.bairro,pacInfo.rua, pacInfo.numero);
        fprintf(arquivo, "\nCEP: %s", pacInfo.cep);
        fprintf(arquivo, "\nCidade: %s", pacInfo.cidade);
        fprintf(arquivo, "\nEstado: %s", pacInfo.estado);
        fprintf(arquivo, "\nData de nascimento: %s/%s/%s", pacInfo.diaNasc, pacInfo.mesNasc, pacInfo.anoNasc);
        fprintf(arquivo, "\nEmail: %s", pacInfo.email);
        fprintf(arquivo, "\nData do diagnostico: %s/%s/%s", pacInfo.diaDiag, pacInfo.mesDiag, pacInfo.anoDiag);
        fprintf(arquivo, "\nComorbidade: %s", pacInfo.comorbidade);

        printf("\nContinuar? (0-nao / 1-sim): ");
        scanf("%d", &op);

        int anoInt = atoi(pacInfo.anoNasc);


        if(anoInt <= 1956 || comorbidadeInt == 1) {
            FILE *grupoRisco = fopen("grupo-risco.txt", "a+");

            fprintf(grupoRisco, "\n\nCEP: %s\nIdade: %d", pacInfo.cep, 2021-anoInt);
        }

        if (op == 1) {
            fputs("\n", arquivo);
        }
    } while (op==1);
    fclose(arquivo);
    system("PAUSE");
}
