// Salve este conteúdo em um arquivo chamado "main.c"

#include <stdio.h>
#include "funcoes.h" // Inclui nosso arquivo de cabeçalho para poder usar as funções

int main() {
    printf("--- Teste da Lista de Exercicios de Funcoes ---\n\n");

    // --- Teste do Exercício 1 ---
    printf("--- Exercicio 1: Conversao de Medidas ---\n");
    int metros = 10;
    int centimetros = converteParaCentimetros(metros);
    printf("%d metros equivalem a %d centimetros.\n\n", metros, centimetros);

    // --- Teste do Exercício 2 ---
    printf("--- Exercicio 2: Verificacao de Maioridade ---\n");
    int idade1 = 25, idade2 = 16;
    printf("A idade %d eh maior de idade? (1=Sim, 0=Nao): %d\n", idade1, ehMaiorDeIdade(idade1));
    printf("A idade %d eh maior de idade? (1=Sim, 0=Nao): %d\n\n", idade2, ehMaiorDeIdade(idade2));

    // --- Teste do Exercício 3 ---
    printf("--- Exercicio 3: Contador de Chamadas ---\n");
    printf("Valor inicial do contador: %d\n", contador);
    contaChamada(); // 1a chamada
    contaChamada(); // 2a chamada
    contaChamada(); // 3a chamada
    printf("Valor final do contador apos 3 chamadas: %d\n\n", contador);

    // --- Teste do Exercício 4 ---
    printf("--- Exercicio 4: Operacoes Multiplas por Referencia ---\n");
    int numA = 5, numB = 7;
    printf("Valores originais: a = %d, b = %d\n", numA, numB);
    // Passamos o ENDEREÇO das variáveis para a função usando o operador '&'
    calculaDobroTriplo(&numA, &numB);
    printf("Valores alterados: a = %d (dobro), b = %d (triplo)\n\n", numA, numB);

    // --- Teste do Exercício 5 ---
    printf("--- Exercicio 5: Media de Notas ---\n");
    float notasAluno[] = {8.5, 7.0, 9.5, 10.0};
    // sizeof(notasAluno) / sizeof(float) é uma forma de calcular o número de elementos no vetor.
    int numNotas = sizeof(notasAluno) / sizeof(float);
    float media = calculaMedia(notasAluno, numNotas);
    printf("A media das notas {8.5, 7.0, 9.5, 10.0} eh: %.2f\n\n", media);

    // --- Teste do Exercício 6 ---
    printf("--- Exercicio 6: Preenchimento de Matriz ---\n");
    int matrizPreenchida[3][3];
    preencheMatriz(matrizPreenchida);
    printf("Matriz preenchida com o produto dos indices:\n");
    // Usando a função do exercício 10 para exibir a matriz
    exibeMatriz3x3(matrizPreenchida);

    // --- Teste do Exercício 7 ---
    printf("--- Exercicio 7: Vogal ou Consoante ---\n");
    char letra1 = 'A', letra2 = 'z';
    printf("O caractere '%c' eh uma vogal? (1=Sim, 0=Nao): %d\n", letra1, ehVogal(letra1));
    printf("O caractere '%c' eh uma vogal? (1=Sim, 0=Nao): %d\n\n", letra2, ehVogal(letra2));

    // --- Teste do Exercício 8 ---
    printf("--- Exercicio 8: Minimo e Maximo em Vetor ---\n");
    int numeros[] = {45, 12, 89, 2, 55, 99, 23};
    int n_numeros = sizeof(numeros) / sizeof(int);
    int minimo, maximo;
    encontraMinMax(numeros, n_numeros, &minimo, &maximo);
    printf("No vetor {45, 12, 89, 2, 55, 99, 23}:\n");
    printf("Menor valor: %d\n", minimo);
    printf("Maior valor: %d\n\n", maximo);

    // --- Teste do Exercício 9 ---
    printf("--- Exercicio 9: Soma dos Digitos ---\n");
    int numeroParaSomar = 123;
    printf("A soma dos digitos do numero %d eh: %d\n\n", numeroParaSomar, somaDigitos(numeroParaSomar));

    // --- Teste do Exercício 10 ---
    printf("--- Exercicio 10: Analise de Matriz Quadrada ---\n");
    int minhaMatriz[3][3];
    leMatriz3x3(minhaMatriz); // Pede para o usuário digitar os valores
    exibeMatriz3x3(minhaMatriz); // Mostra a matriz digitada
    int somaDiag = somaDiagonalPrincipal3x3(minhaMatriz);
    printf("A soma da diagonal principal da matriz eh: %d\n\n", somaDiag);

    return 0; // Indica que o programa terminou com sucesso
}
