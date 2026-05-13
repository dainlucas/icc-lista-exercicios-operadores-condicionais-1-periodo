/*
// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038

Exercicio 4: Elabore um programa para ler 4 notas de um aluno (de 1 a 10) e o sexo (M ou F).
Após calcular a média das notas, apresentar a mensagem “Aprovada” se o aluno tiver obtido
média maior ou igual a 6 e for do sexo feminino, “Aprovado” se  o aluno tiver média maior
ou igual a 6 e for do sexo masculino, “Reprovada” caso a média da aluna seja menos de 6 pontos
e “Reprovada” caso a média da aluna seja menos de 6 pontos.
*/

#include <stdio.h>

int main(void)
{
    float notas[4], soma, media;
    char sexo;
    int leitura;
    int i = 0;
    soma = 0;

    do
    {
        printf("Digite o sexo do aluno, M para masculino, F para feminino: ");
        scanf(" %c", &sexo);
    }
    while(sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f');
    
    do
    {
        printf("Nota numero %d do aluno: ", i+1);
        leitura = scanf("%f", &notas[i]);
        if (leitura == 1)
        {
            if (notas[i] >= 1 && notas[i] <= 10)
            {
                i++;
            }
            else
            {
                printf("Erro, digite um numero valido: \n");
            }
        }
        else
        {
            printf("Erro, entrada invalida\n");
            while (getchar() != '\n');
        }
    }
    while (i < 4);

    for (int s = 0; s < 4; s++)
    {
        soma = soma + notas[s];
    }

    media = soma / 4;

    if (media >= 6 && (sexo == 'f' || sexo == 'F'))
        printf("Aprovada\n");

    else if (media >= 6 && (sexo == 'm' || sexo == 'M'))
        printf("Aprovado\n");
    
    else if (media < 6 && (sexo == 'f' || sexo == 'F'))
        printf("Reprovada\n");

    else
        printf("Reprovado\n");
    
    return 0;
}