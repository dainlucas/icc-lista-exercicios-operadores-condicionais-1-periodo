/*
 // Aluno: Lucas Ruan Messias Silva
 // Matricula: 171038

 Exercicio 20:
 Desenvolva uma funcao que receba o valor de uma compra e um codigo de pagamento:
 - 1: A vista (dinheiro/pix), 15%% de desconto.
 - 2: A vista (cartao), 5%% de desconto.
 - 3: Parcelado 2x, preco normal.
 - 4: Parcelado 3x, 10%% de juros.
 A funcao deve retornar o valor final a ser pago.
*/

#include <stdio.h>

float calcularValorFinal(float valor, int codigo)
{
    if (codigo == 1)
    {
        return valor - (valor * 0.15);
    }
    else if (codigo == 2)
    {
        return valor - (valor * 0.05);
    }
    else if (codigo == 3)
    {
        return valor;
    }
    else if (codigo == 4)
    {
        return valor + (valor * 0.10);
    }
    else
    {
        return valor;
    }
}

int main(void)
{
    float valorCompra, valorFinal;
    int codigoPagamento, leitura, i;
    i = 0;

    do
    {
        printf("Valor da compra: ");
        leitura = scanf("%f", &valorCompra);

        if (leitura != 1)
        {
            printf("Entrada invalida!\n");
            while (getchar() != '\n');
        }
        else if (valorCompra <= 0)
        {
            printf("Valor invalido!\n");
        }
        else
        {
            i++;
        }
    } while (i < 1);

    do
    {
        printf("Codigo de pagamento (1 a 4): ");
        leitura = scanf("%d", &codigoPagamento);

        if (leitura != 1)
        {
            printf("Entrada invalida!\n");
            while (getchar() != '\n');
        }
        else if (codigoPagamento < 1 || codigoPagamento > 4)
        {
            printf("Codigo invalido!\n");
        }
        else
        {
            i++;
        }
    } while (i < 2);

    valorFinal = calcularValorFinal(valorCompra, codigoPagamento);

    printf("Valor final a ser pago: R$ %.2f\n", valorFinal);

    return 0;
}
