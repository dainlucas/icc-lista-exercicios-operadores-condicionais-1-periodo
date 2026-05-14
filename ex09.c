/*
// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038

Exercicio 09: Crie um programa que receba o preço de um produto e sua procedência (código de 1 a 5). 
Exiba o preço final acrescido de imposto:
   - Código 1 (Sul): 10%
   - Código 2 (Norte): 15%
   - Código 3 (Leste): 8%
   - Código 4 (Oeste): 12%
   - Código 5 (Importado): 25%
*/

#include <stdio.h>

int main(void)
{
    double preco, precoFinal, imposto;
    int proced, leitura;
    imposto = 0;
    preco = 0;
    precoFinal = 0;
    proced = 0;

    do
    {
        printf("Preco: ");
        leitura = scanf("%lf", &preco);

        if (leitura != 1)
        {
            printf("Entrada invalida!\n");
            while(getchar() != '\n');
        }
        else if (preco <= 0)
        {
            printf("Valor invalido!\n");
        }

    } while (leitura != 1 || preco <= 0);

    do
    {
        printf("Procedencia: ");
        leitura = scanf("%d", &proced);

        if (leitura != 1)
        {
            printf("Entrada invalida!\n");
            while(getchar() != '\n');
        }
        else if (proced < 1 || proced > 5)
        {
            printf("Valor invalido!\n");
        }

    } while (leitura != 1 || proced < 1 || proced > 5);

    switch (proced)
    {
    case 1:
        imposto = preco * 0.1;
        break;
    case 2:
        imposto = preco * 0.15;
        break;
    case 3:
        imposto = preco * 0.08;
        break;
    case 4:
        imposto = preco * 0.12;
        break;
    case 5:
        imposto = preco * 0.25;
        break;

    default:
        printf("Erro inesperado!\n");
        return 1;
    }

    precoFinal = preco + imposto;

    printf("Preco final: R$ %.2f\n", precoFinal);

    return 0;
}
