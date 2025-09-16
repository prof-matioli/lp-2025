#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

// Salve este conte�do em um arquivo chamado "funcoes.h"

#ifndef FUNCOES_H
#define FUNCOES_H

// --- Prot�tipos das Fun��es ---

// Exerc�cio 1: Converte metros para cent�metros
int converteParaCentimetros(int metros);

// Exerc�cio 2: Verifica se a pessoa � maior de idade
int ehMaiorDeIdade(int idade);

// Exerc�cio 3: Contador de chamadas com vari�vel global
// A palavra-chave 'extern' informa que a vari�vel 'contador'
// � global e ser� definida em outro arquivo (no nosso caso, em funcoes.c)
extern int contador;
void contaChamada(void);

// Exerc�cio 4: Altera valores usando passagem por refer�ncia (ponteiros)
void calculaDobroTriplo(int *a, int *b);

// Exerc�cio 5: Calcula a m�dia de notas em um vetor
float calculaMedia(float notas[], int n);

// Exerc�cio 6: Preenche uma matriz 3x3 com o produto dos seus �ndices
void preencheMatriz(int matriz[3][3]);

// Exerc�cio 7: Verifica se um caractere � uma vogal
int ehVogal(char letra);

// Exerc�cio 8: Encontra o menor e o maior valor em um vetor
void encontraMinMax(int vetor[], int n, int *min, int *max);

// Exerc�cio 9: Soma os d�gitos de um n�mero inteiro positivo
int somaDigitos(int numero);

// Exerc�cio 10: Fun��es para manipular uma matriz 3x3
void leMatriz3x3(int mat[3][3]);
int somaDiagonalPrincipal3x3(int mat[3][3]);
void exibeMatriz3x3(int mat[3][3]);

#endif // FUNCOES_H

#endif // FUNCOES_H_INCLUDED
