
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

int main()
{
    FILE *arquivo;
    int op = 1;
    char nome[SIZE];
    char cpf[SIZE];
    char telefone[SIZE];
    char rua[SIZE];
    char numero[SIZE];
    char cep[SIZE];
    char bairro[SIZE];
    char cidade[SIZE];
    char estado[SIZE];
    char dataNasc[SIZE];
    char email[SIZE];
    char dataDiag[SIZE];
    char comorbidade[SIZE];

    do {
        arquivo = fopen("cadastro.txt", "a+");
        printf("\n Insira seu nome: ");
        fflush(stdin);
        scanf("%[^\n]s", &nome);

        printf("\n Insira seu CPF: ");
        fflush(stdin);
        scanf("%[^\n]s", &cpf);

        printf("\n Insira seu telefone: ");
        fflush(stdin);
        scanf("%[^\n]s", &telefone);

        printf("\n Insira seu rua: ");
        fflush(stdin);
        scanf("%[^\n]s", &rua);

        printf("\n Insira seu número: ");
        fflush(stdin);
        scanf("%[^\n]s", &numero);

        printf("\n Insira seu CEP: ");
        fflush(stdin);
        scanf("%[^\n]s", &cep);

        printf("\n Insira seu bairro: ");
        fflush(stdin);
        scanf("%[^\n]s", &bairro);

        printf("\n Insira seu cidade: ");
        fflush(stdin);
        scanf("%[^\n]s", &cidade);

        printf("\n Insira seu estado: ");
        fflush(stdin);
        scanf("%[^\n]s", &estado);

        printf("\n Insira a data de nascimento do paciente: ");
        fflush(stdin);
        scanf("%[^\n]s", &dataNasc);

        printf("\n Insira o email do paciente: ");
        fflush(stdin);
        scanf("%[^\n]s", &email);

        printf("\n Insira a data do diagnóstico: ");
        fflush(stdin);
        scanf("%[^\n]s", &dataDiag);

        printf("\n Insira a comorbidade do paciente: ");
        fflush(stdin);
        scanf("%[^\n]s", &comorbidade);

        fprintf(arquivo,"\n\nNome: %s\nCPF: %s\nTelefone: %s\nRua: %s\nNúmero: %s\nCEP: %s\nBairro: %s\nCidade: %s\nEstado: %s\nData de nascimento: %s\nEmail: %s\nData do diagnóstico: %s\nComorbidade: %s", nome, cpf, telefone, rua, numero, cep, bairro, cidade, estado, dataNasc, email, dataDiag, comorbidade);

        printf("\nContinuar? (0-não / 1-sim): ");
        scanf("%d", &op);

        if (op == 1) {
            fputs("\n", arquivo);
        }
    } while (op==1);
    fclose(arquivo);

    return 0;
}
