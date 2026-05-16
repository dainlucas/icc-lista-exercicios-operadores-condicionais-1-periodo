/*
 // Aluno: Lucas Ruan Messias Silva
 // Matricula: 171038

 Exercicio 19:
 Escreva um programa para ler o ano de nascimento de uma pessoa e o ano atual. Verifique se ela ja pode votar (16 anos ou mais) e se ja pode tirar a carteira de habilitacao (18 anos ou mais). Exiba mensagens claras para cada situacao.
*/

#include <stdio.h>

int main(void)
{
    int anoNascimento, anoAtual, leitura, idade, i;
    i = 0;

    do
    {
        printf("Ano atual: ");
        leitura = scanf("%d", &anoAtual);

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
        printf("Ano de nascimento: ");
        leitura = scanf("%d", &anoNascimento);

        if (leitura != 1)
        {
            printf("Entrada invalida!\n");
            while (getchar() != '\n');
        }
        else if (anoNascimento > anoAtual)
        {
            printf("Ano de nascimento invalido!\n");
        }
        else
        {
            i++;
        }
    } while (i < 2);

    idade = anoAtual - anoNascimento;

    if (idade >= 18)
    {
        printf("Idade: %d anos. Pode votar e pode tirar a carteira de habilitacao.\n", idade);
    }
    else if (idade >= 16)
    {
        printf("Idade: %d anos. Pode votar, mas nao pode tirar a carteira de habilitacao.\n", idade);
    }
    else
    {
        printf("Idade: %d anos. Nao pode votar e nao pode tirar a carteira de habilitacao.\n", idade);
    }

    return 0;
}
