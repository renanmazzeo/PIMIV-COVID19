#define SIZE 50

struct pacienteInfo {
    char nome[SIZE];
    char cpf[SIZE];
    char telefone[SIZE];
    char rua[SIZE];
    char numero[SIZE];
    char cep[SIZE];
    char bairro[SIZE];
    char cidade[SIZE];
    char estado[SIZE];
    char diaNasc[SIZE];
    char mesNasc[SIZE];
    char anoNasc[SIZE];
    char email[SIZE];
    char diaDiag[SIZE];
    char mesDiag[SIZE];
    char anoDiag[SIZE];
    char comorbidade[SIZE];
};

void cadastroPaciente(arquivo, op);
