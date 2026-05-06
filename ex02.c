/*
// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038

Exercicio 2: Escreva uma programa em C que leia do teclado o sexo de uma pessoa.
Se o sexo digitado for 'M' ou 'F', escrever na tela “Sexo válido!”.
Caso contrário, informar “Sexo inválido!”;
*/

#include <stdio.h>

int main(){
    char sexo;
    
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'F')
        printf("Sexo Valido!\n");

    else
        printf("Sexo Invalido!\n");

    return 0;
}