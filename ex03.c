/*
// Aluno: Lucas Ruan Messias Silva
// Matricula: 171038

Exercicio 3: Escreva uma função em C que receba 3 números, verifique e mostre o maior deles.
Teste sua função. 
*/

#include <stdio.h>

float verificaMaior(float x, float y, float z){
    float m; // maior numero
    m = x;
    if (y > m)
        m = y;

    if (z > m)
        m = z;
    return m;
}

int main(){
    float e1, e2, e3, maior;

    scanf("%f %f %f", &e1, &e2, &e3);

    maior = verificaMaior(e1, e2, e3);

    printf("Maior Numero: %.2f\n", maior);

    return 0;
}