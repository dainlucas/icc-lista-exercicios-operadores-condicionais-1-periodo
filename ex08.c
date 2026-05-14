/*
// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038

Exercicio 8: Escreva um programa que leia a idade de um nadador e o classifique em uma das seguintes categorias:
- Infantil A (5 a 7 anos)
- Infantil B (8 a 10 anos)
- Juvenil A (11 a 13 anos)
- Juvenil B (14 a 17 anos)
- Adulto (maiores de 18 anos)
*/

#include <stdio.h>

int main(void)
{
    int idade, leitura;

    do
    {
        printf("Idade: ");
        leitura = scanf("%d", &idade);

        if (leitura != 1)
        {
            printf("Entrada invalida!\n");
            while(getchar() != '\n');
        }

        else if(idade < 0 || idade > 110)
        {
            printf("Idade invalida!\n");
        }

    } while (leitura != 1 || idade < 0 || idade > 110);

    if (idade >= 18)
    {
        printf("ADULTO\n");
    }
    else if(idade >= 14)
    {
        printf("JUVENIL B\n");
    }
    else if(idade >= 11)
    {
        printf("JUVENIL A\n");
    }
    else if(idade >= 8)
    {
        printf("INFANTIL B\n");
    }
    else if(idade >= 5)
    {
        printf("INFANTIL A\n");
    }
    else
    {
        printf("NENHUMA CATEGORIA\n");
    }
    
    return 0;
}