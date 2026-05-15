/*
 // Aluno: Lucas Ruan Messias Silva
 // Matricula: 171038

 Exercicio 13:
 Escreva uma função chamada 'verificarDiasMes' que recebe o número do mês (1 a 12) e o ano como parâmetros.
 A função deve retornar quantos dias o mês possui. Considere anos bissextos para o mês de fevereiro.
 No main, peça os dados ao usuário e exiba o retorno da função.
*/

#include <stdio.h>

int verificarDiasMes(int nMes, int nAno)
{
    // janeiro, marco, maio, julho, agosto, outubro, dezembro
    if (nMes == 1 || nMes == 3 || nMes == 5 || nMes == 7 || nMes == 8 || nMes == 10 || nMes == 12)
    {
        return 31;
    }
    // abril, junho, setembro, novembro
    else if (nMes == 4 || nMes == 6 || nMes == 9 || nMes == 11)
    {
        return 30;
    }
    // fevereiro
    else if (nMes == 2)
    {
        // ano bisexto
        if ((nAno % 400 == 0) || (nAno % 4 == 0 && nAno % 100 != 0))
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }

    return 0;
}

int main(void)
{
    int mes, ano, leitura, i, dias;
    i = 0;

    do
    {
        printf("Mes: ");
        leitura = scanf("%d", &mes);

        if (leitura != 1)
        {
            printf("Entrada invalida!\n");
            while (getchar() != '\n');
        }
        else if (mes > 12 || mes < 1)
        {
            printf("Mes invalido!\n");
        }
        else
        {
            i++;
        }

    } while (i < 1);

    do
    {
        printf("Ano: ");
        leitura = scanf("%d", &ano);

        if (leitura != 1)
        {
            printf("Entrada invalida!\n");
            while (getchar() != '\n');
        }
        else if (ano < 1)
        {
            printf("Ano invalido!\n");
        }
        else
        {
            i++;
        }

    } while (i < 2);

    dias = verificarDiasMes(mes, ano);

    printf("Dias: %d\n", dias);

    return 0;
}