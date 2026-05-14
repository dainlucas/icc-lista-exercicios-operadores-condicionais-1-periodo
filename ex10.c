/*
// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038

Exercicio 10:
Um banco concederá um crédito especial aos seus clientes, variável com o saldo 
médio no último ano. Faça um algoritmo que leia o saldo médio de um cliente e calcule o 
valor do crédito de acordo com a tabela abaixo. Mostre uma mensagem informando o 
saldo médio e o valor do crédito.

Saldo médio        Percentual
 - de 0 a 200     nenhum crédito            
 - de 201 a 400   10% do valor do saldo médio          
 - de 401 a 600   30% do valor do saldo médio          
 - acima de 601   40% do valor do saldo médio
*/

#include <stdio.h>

int main(void)
{
    double saldoMedio, credito;
    int leitura;
    credito = 0;

    do
    {
        printf("Saldo medio: ");
        leitura = scanf("%lf", &saldoMedio);

        if (leitura != 1)
        {
            printf("Erro, entrada invalida!\n");
            while(getchar() != '\n');
        }

        else if (saldoMedio < 0)
        {
            printf("Valor invalido!\n");
        }
    } while (leitura != 1 || saldoMedio < 0);

    if (saldoMedio > 601)
    {
        credito = saldoMedio * 0.4;
    }
    else if (saldoMedio >= 401)
    {   
        credito = saldoMedio * 0.3;
    }
    else if (saldoMedio >= 201)
    {   
        credito = saldoMedio * 0.1;
    }

    printf("Saldo Medio: R$ %.2f\nCredito: R$ %.2f\n", saldoMedio, credito);

    return 0;
}