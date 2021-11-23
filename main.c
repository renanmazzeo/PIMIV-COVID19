#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>
#include "loginregister.h"
#include "registroPaciente.h"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cho;
    printf("========== LOGIN OU REGISTRO ==========\n");
    printf("1. Registrar: \n2. Login:\n\n");
    printf("Digite a opção: ");
    scanf("%d", &cho);
    if(cho == 1)
    {
        system("CLS");
        registro();
    }
    else if(cho == 2)
    {
        system("CLS");
        login ();
    }

    FILE *arquivo;
    int op = 1;

    int optionInt;
    void menuPrincipal() {
        printf("========== MENU PRINCIPAL ==========\n");
        printf("1. Cadastrar paciente: \n");
        printf("2. Excluir dados dos pacientes: \n");
        printf("3. Sair do sistema: \n\n");
        printf("Digite a opçao: ");
        scanf("%d", &optionInt);
    }

    if (logged == 1) {

        menuPrincipal();
        while(optionInt != 3) {
            switch(optionInt) {
            case 1:
                cadastroPaciente(arquivo, op);
                optionInt = 0;
                system("CLS");
                menuPrincipal();
                break;
            case 2:
                arquivo = fopen("cadastro-paciente.txt", "w");
                if (arquivo) {
                    printf("\nDados deletados com sucesso!\n");
                    fclose(arquivo);
                    printf("\nRetorno: %d\n", remove(arquivo));
                } else {
                    printf("\nErro ao abrir o arquivo!\n");
                }
                optionInt = 0;
                system("PAUSE");
                system("CLS");
                menuPrincipal();
                break;
            }
        }
    }

    return 0;
}
