/*
// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038

Exercicio 11:
Desenvolva um algoritmo que peça três notas, calcule a média ponderada (pesos 2, 3 e 5)
e informe se o aluno foi aprovado (média >= 7), em recuperação (5 <= média < 7) ou reprovado (média < 5).
*/

#include <stdio.h>

int main(void)
{
    float notas[3], media;
    int leitura, i;
    i = 0;
    leitura = 0;

    do
    {
        printf("Nota %d: ", i+1);
        leitura = scanf("%f", &notas[i]);

        if (leitura !=  1)
        {
            printf("Entrada invalida!\n");
            while(getchar() != '\n');
        }
        else if(notas[i] < 0)
        {
            printf("Entrada Invalida\n");
        }
        else
        {
            i++;
        }
    } while (i < 3);

    media = ((notas[0] * 2) + (notas[1] * 3) + (notas[2] * 5))/10;

    if (media >= 7)
    {
        printf("Aluno Aprovado!\n");
    }
    else if(media >= 5)
    {
        printf("Em recuperacao!\n");
    }
    else
    {
        printf("Reprovado!\n");
    }
    
    return 0;
}