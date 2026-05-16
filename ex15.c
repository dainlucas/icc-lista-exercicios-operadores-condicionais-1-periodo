/*
 // Aluno: Lucas Ruan Messias Silva
 // Matricula: 171038

 Exercicio 15:
 Crie um programa que simule um menu de um Drive-Thru. O usuario digita o codigo do item (100 a 105). Exiba o nome do produto e o valor a pagar. Caso o codigo nao exista, informe "Produto Invalido".
 (Ex: 100-Cachorro Quente R$5,00 | 101-Bauru R$8,00 | 102-Hamburguer R$12,00).
*/

#include <stdio.h>

int main(void)
{
    int codigo, leitura;

    do
    {
        printf("Codigo do item: ");
        leitura = scanf("%d", &codigo);

        if (leitura != 1)
        {
            printf("Entrada invalida!\n");
            while (getchar() != '\n');
        }
    } while (leitura != 1);

    if (codigo == 100)
    {
        printf("Cachorro Quente R$5,00\n");
    }
    else if (codigo == 101)
    {
        printf("Bauru R$8,00\n");
    }
    else if (codigo == 102)
    {
        printf("Hamburguer R$12,00\n");
    }
    else if (codigo == 103)
    {
        printf("Cheeseburguer R$15,00\n");
    }
    else if (codigo == 104)
    {
        printf("Refrigerante R$4,00\n");
    }
    else if (codigo == 105)
    {
        printf("Suco R$6,00\n");
    }
    else
    {
        printf("Produto Invalido\n");
    }

    return 0;
}