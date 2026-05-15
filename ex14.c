/*
 // Aluno: Lucas Ruan Messias Silva
 // Matricula: 171038

- Desenvolva um sistema de análise de crédito. O programa lê: renda mensal, valor da parcela e número de parcelas. 
- Se a parcela for maior que 30% da renda, crédito negado.
- Caso contrário, se o cliente tiver menos de 25 anos, o crédito é negado por "idade mínima".
- Se passar em ambos, crédito aprovado.
*/

#include <stdio.h>

int main(void)
{
    double rendaM, vParcela;
    int idade, i, leitura, nParcelas;
    i = 0;

    do
    {
        printf("Idade: ");
        leitura = scanf("%d", &idade);

        if (leitura != 1)
        {
            printf("Entrada invalida!\n");
            while (getchar() != '\n');
        }
        else if (idade <= 0)
        {
            printf("Idade invalida!\n");
        }
        else
        {
            i++;
        }
    } while (i < 1);

    do
    {
        printf("Renda mensal: ");
        leitura = scanf("%lf", &rendaM);

        if (leitura != 1)
        {
            printf("Entrada invalida!\n");
            while (getchar() != '\n');
        }
        else if (rendaM <= 0)
        {
            printf("Renda mensal invalida!\n");
        }
        else
        {
            i++;
        }
    } while (i < 2);

    do
    {
        printf("Valor da Parcela: ");
        leitura = scanf("%lf", &vParcela);

        if (leitura != 1)
        {
            printf("Entrada invalida!\n");
            while (getchar() != '\n');
        }
        else if (vParcela <= 0)
        {
            printf("Valor da parcela invalida!\n");
        }
        else
        {
            i++;
        }
    } while (i < 3);

    do
    {
        printf("Numero de parcelas: ");
        leitura = scanf("%d", &nParcelas);

        if (leitura != 1)
        {
            printf("Entrada invalida!\n");
            while (getchar() != '\n');
        }
        else if (nParcelas <= 0)
        {
            printf("Numero de parcelas invalidas!\n");
        }
        else
        {
            i++;
        }
    } while (i < 4);

    if (vParcela > 0.3 * rendaM)
    {
        printf("Credito Negado - Parcela alta!\n");
    }
    else if (idade < 25)
    {
        printf("Credito Negado - Idade Minima!\n");
    }
    else
    {
        printf("Credito Aprovado\n");
    }
    
    return 0;
}