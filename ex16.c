/*
 // Aluno: Lucas Ruan Messias Silva
 // Matricula: 171038

 Exercicio 16:
 Implemente uma funcao chamada 'conceitoFinal' que recebe a nota de um aluno (0 a 100) e retorna um caractere representando o conceito:
 - A (>= 90)
 - B (>= 80 e < 90)
 - C (>= 70 e < 80)
 - D (>= 60 e < 70)
 - F (< 60)
*/

#include <stdio.h>

char conceitoFinal(int nota)
{
    if (nota >= 90)
    {
        return 'A';
    }
    else if (nota >= 80 && nota < 90)
    {
        return 'B';
    }
    else if (nota >= 70 && nota < 80)
    {
        return 'C';
    }
    else if (nota >= 60 && nota < 70)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}

int main(void)
{
    int nota, leitura;
    char conceito;

    do
    {
        printf("Nota do aluno (0 a 100): ");
        leitura = scanf("%d", &nota);

        if (leitura != 1)
        {
            printf("Entrada invalida!\n");
            while (getchar() != '\n');
        }
        else if (nota < 0 || nota > 100)
        {
            printf("Nota invalida!\n");
            leitura = 0;
        }
    } while (leitura != 1);

    conceito = conceitoFinal(nota);
    printf("Conceito: %c\n", conceito);

    return 0;
}
