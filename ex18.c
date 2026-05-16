/*
 // Aluno: Lucas Ruan Messias Silva
 // Matricula: 171038

 Exercicio 18:
 Crie uma funcao que receba tres valores inteiros e retorne o maior deles. Utilize desvios condicionais internos na funcao para realizar a comparacao de forma logica (sem usar funcoes prontas de bibliotecas).
*/

#include <stdio.h>

int maiorValor(int n1, int n2, int n3)
{
    int maior = n1;

    if (n2 > maior)
    {
        maior = n2;
    }
    
    if (n3 > maior)
    {
        maior = n3;
    }

    return maior;
}

int main(void)
{
    int v1, v2, v3, leitura, i, maior;
    i = 0;

    do
    {
        printf("Valor 1: ");
        leitura = scanf("%d", &v1);

        if (leitura != 1)
        {
            printf("Entrada invalida!\n");
            while (getchar() != '\n');
        }
        else
        {
            i++;
        }
    } while (i < 1);

    do
    {
        printf("Valor 2: ");
        leitura = scanf("%d", &v2);

        if (leitura != 1)
        {
            printf("Entrada invalida!\n");
            while (getchar() != '\n');
        }
        else
        {
            i++;
        }
    } while (i < 2);

    do
    {
        printf("Valor 3: ");
        leitura = scanf("%d", &v3);

        if (leitura != 1)
        {
            printf("Entrada invalida!\n");
            while (getchar() != '\n');
        }
        else
        {
            i++;
        }
    } while (i < 3);

    maior = maiorValor(v1, v2, v3);

    printf("Maior valor: %d\n", maior);

    return 0;
}
