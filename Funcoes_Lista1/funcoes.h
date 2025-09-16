#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

// Salve este conteúdo em um arquivo chamado "funcoes.h"

#ifndef FUNCOES_H
#define FUNCOES_H

// --- Protótipos das Funções ---

// Exercício 1: Converte metros para centímetros
int converteParaCentimetros(int metros);

// Exercício 2: Verifica se a pessoa é maior de idade
int ehMaiorDeIdade(int idade);

// Exercício 3: Contador de chamadas com variável global
// A palavra-chave 'extern' informa que a variável 'contador'
// é global e será definida em outro arquivo (no nosso caso, em funcoes.c)
extern int contador;
void contaChamada(void);

// Exercício 4: Altera valores usando passagem por referência (ponteiros)
void calculaDobroTriplo(int *a, int *b);

// Exercício 5: Calcula a média de notas em um vetor
float calculaMedia(float notas[], int n);

// Exercício 6: Preenche uma matriz 3x3 com o produto dos seus índices
void preencheMatriz(int matriz[3][3]);

// Exercício 7: Verifica se um caractere é uma vogal
int ehVogal(char letra);

// Exercício 8: Encontra o menor e o maior valor em um vetor
void encontraMinMax(int vetor[], int n, int *min, int *max);

// Exercício 9: Soma os dígitos de um número inteiro positivo
int somaDigitos(int numero);

// Exercício 10: Funções para manipular uma matriz 3x3
void leMatriz3x3(int mat[3][3]);
int somaDiagonalPrincipal3x3(int mat[3][3]);
void exibeMatriz3x3(int mat[3][3]);

#endif // FUNCOES_H

#endif // FUNCOES_H_INCLUDED
