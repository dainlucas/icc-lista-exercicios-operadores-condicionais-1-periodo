/*
 // Aluno: Lucas Ruan Messias Silva
 // Matricula: 171038

 Exercicio 17:
 Escreva um programa que leia um numero inteiro entre 1 e 7 e imprima o dia da semana correspondente (1-Domingo, 2-Segunda, etc.). Informe "Dia invalido" para outros valores.
*/

#include <stdio.h>

int main(void)
{
    int dia, leitura;

    do
    {
        printf("Dia da semana (1 a 7): ");
        leitura = scanf("%d", &dia);

        if (leitura != 1)
        {
            printf("Entrada invalida!\n");
            while (getchar() != '\n');
        }
    } while (leitura != 1);

    if (dia == 1)
    {
        printf("Domingo\n");
    }
    else if (dia == 2)
    {
        printf("Segunda\n");
    }
    else if (dia == 3)
    {
        printf("Terca\n");
    }
    else if (dia == 4)
    {
        printf("Quarta\n");
    }
    else if (dia == 5)
    {
        printf("Quinta\n");
    }
    else if (dia == 6)
    {
        printf("Sexta\n");
    }
    else if (dia == 7)
    {
        printf("Sabado\n");
    }
    else
    {
        printf("Dia invalido\n");
    }

    return 0;
}
