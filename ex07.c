/*
// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038

Exercicio 7: No Estado do “blablabla”, para transferências de veículos, o DETRAN cobra uma taxa 
de 1% para carros fabricados antes de 1990 e uma taxa de 1.5% para os fabricados de 
1990 em diante, taxa esta incidindo sobre o valor de tabela do carro. Escreva um 
algoritmo para lê o ano e o preço do carro e a seguir calcula e mostre imposto a ser pago.
*/

#include <stdio.h>

int main(void)
{
    int ano, leitura;
    float preco, imposto;

    do
    {
        printf("Ano do Carro: ");
        leitura = scanf("%d", &ano);
        if (leitura != 1)
        {
            printf("Erro, entrada invalida\n");
            while (getchar() != '\n');
        }
    } while (leitura != 1);
    
    do
    {
        printf("Preco do carro: ");
        leitura = scanf("%f", &preco);
        if (leitura != 1)
        {
            printf("Erro, entrada invalida\n");
            while (getchar() != '\n');
        }
    } while (leitura != 1);

    if (ano < 1990)
    {
        imposto = 0.01 * preco;
    }   
    else
    {
        imposto = 0.015 * preco;
    }

    printf("Imposto: R$ %.2f\n", imposto);

    return 0;
}
