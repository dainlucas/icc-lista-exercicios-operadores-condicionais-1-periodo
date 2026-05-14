/*
// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038

Exercicio 12:
Crie uma calculadora simples. O programa deve ler dois números reais e um caractere representando a operação (+, -, *, /).
Utilize switch case para realizar a operação e exibir o resultado. Imprima erro caso o divisor seja zero na divisão.
*/

#include <stdio.h>

int main(void)
{
    float entrada[2], saida;
    int leitura, i;
    char operador;
    i = 0;
    leitura = 0;

    do
    {
        printf("Numero %d: ", i+1);
        leitura = scanf("%f", &entrada[i]);

        if (leitura !=  1)
        {
            printf("Entrada invalida!\n");
            while(getchar() != '\n');
        }
        else
        {
            i++;
        }
    } while (i < 2);

    do
    {
        printf("Operacao: ");
        while(getchar() != '\n');
        scanf("%c", &operador);

        if (operador != '+' && operador != '-' && operador != '*' && operador != '/')
        {
            printf("Operador invalido!\n");
        }
    } while (operador != '+' && operador != '-' && operador != '*' && operador != '/');

    switch (operador)
    {
    case '+':
        saida = entrada[0] + entrada[1];
        break;
    case '-':
        saida = entrada[0] - entrada[1];
        break;
    
    case '*':
        saida = entrada[0] * entrada[1];
        break;
    case '/':
        if (entrada[1] == 0)
        {
            printf("Erro - Divisao por zero\n");
            return 1;
        }
        saida = entrada[0] / entrada[1];
        break;
    default:
        printf("Erro inesperado!\n");
        return 1;
    }

    printf("%.2f %c %.2f = %.2f\n", entrada[0], operador, entrada[1], saida);
    
    return 0;
}
