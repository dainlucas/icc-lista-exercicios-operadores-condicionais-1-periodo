/*
// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038

Exercicio 1: Escreva uma programa em C que leia dois números inteiros e mostre o
resultado da diferença do maior valor pelo menor;
*/

#include <stdio.h>

int main(){
    int num1, num2, diferenca;
    diferenca = 0;

    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
        diferenca = num1 - num2;

    else
        diferenca = num2 - num1;

    printf("Diferenca: %d\n", diferenca);

    return 0;
}