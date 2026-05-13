/*
// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038

Exercicio 5: A escola “XYZ” faz o pagamento de seus professores por hora/aula. Faça um programa que leia:
a qualificação e a quantidade de aulas dadas de um professor, calcule e exiba o salário do professor.
Sabe-se que o valor da hora/aula segue a tabela abaixo:
Professor somente graduado R$12,00 por hora/aula 
Professor mestre R$17,00 por hora/aula 
Professor doutor R$25,00 por hora/aula
*/

#include <stdio.h>

int main(void)
{
    int qualificacao, leitura, hAulas;
    float salario;
    qualificacao = -1;
    hAulas = 0;
    leitura = 0;

    printf("[1] - Graduado\n[2] - Mestre\n[3] - Doutor\nDigite a qualificacao do professor: ");
    do
    {
        leitura = scanf("%d", &qualificacao);
        if (leitura != 1)
        {
            printf("Erro, entrada invalida, tente novamente: ");
            while (getchar() != '\n');
        }
        else if (qualificacao < 1 || qualificacao > 3)
        {
            printf("Erro, valor invalido, tente novamente: ");
        }
    }
    while (leitura != 1 || (qualificacao < 1 || qualificacao > 3));

    printf("Digite a quantidade de horas/aula dadas: ");
    do
    {
        leitura = scanf("%d", &hAulas);
        if (leitura !=  1)
        {
            printf("Erro, entrada invalida, tente novamente: ");
            while (getchar() != '\n');
        }
        else if(hAulas <= 0)
        {
            printf("Erro, numero de aulas inesperado, tente novamente: ");
        }
    }
    while(leitura != 1 || hAulas <= 0);

    switch (qualificacao)
    {
    case 1:
        salario = hAulas * 12;
        break;
    case 2:
        salario = hAulas * 17;
        break;
    case 3:
        salario = hAulas * 25;
        break;
    default:
        printf("\nErro Inesperado!!\n");
        return 1;
    }

    printf("Salario do professor: R$ %.2f\n", salario);

    return 0;
}