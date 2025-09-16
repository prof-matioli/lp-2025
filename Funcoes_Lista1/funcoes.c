// Salve este conte�do em um arquivo chamado "funcoes.c"

#include "funcoes.h" // Inclui os prot�tipos para garantir consist�ncia
#include <stdio.h>    // Necess�rio para fun��es de entrada/sa�da como printf e scanf
#include <ctype.h>    // Necess�rio para a fun��o tolower() no Exerc�cio 7

// --- Implementa��o das Fun��es ---

/**
 * Exerc�cio 1: Passagem por Valor - Convers�o de Medidas
 * Recebe um valor em metros e o converte para cent�metros.
 * Como 1 metro = 100 cent�metros, basta multiplicar o valor por 100.
 */
int converteParaCentimetros(int metros) {
    // A fun��o retorna o resultado do c�lculo.
    return metros * 100;
}

/**
 * Exerc�cio 2: L�gica com Retorno - Verifica��o de Maioridade
 * Verifica se a idade fornecida � maior ou igual a 18.
 */
int ehMaiorDeIdade(int idade) {
    // Usamos uma estrutura condicional (if-else) para verificar a idade.
    if (idade >= 18) {
        return 1; // Retorna 1 se for maior de idade
    } else {
        return 0; // Retorna 0 caso contr�rio
    }
}

/**
 * Exerc�cio 3: Escopo de Vari�veis - Contador de Chamadas
 * Esta � a defini��o da vari�vel global. Ela � inicializada com 0.
 * Por ser global, seu valor persiste entre as chamadas da fun��o.
 */
int contador = 0;

void contaChamada(void) {
    // A cada chamada desta fun��o, o valor da vari�vel global 'contador'
    // � incrementado em 1.
    contador++;
}

/**
 * Exerc�cio 4: Passagem por Refer�ncia - Opera��es M�ltiplas
 * Recebe o ENDERE�O de duas vari�veis inteiras.
 * O '*' antes do nome do par�metro indica que ele � um ponteiro.
 */
void calculaDobroTriplo(int *a, int *b) {
    // Para acessar ou modificar o VALOR no endere�o apontado, usamos o operador '*'.
    // Altera o valor da primeira vari�vel para o seu dobro.
    *a = *a * 2;
    // Altera o valor da segunda vari�vel para o seu triplo.
    *b = *b * 3;
}

/**
 * Exerc�cio 5: Passagem de Vetores - An�lise de Notas
 * Recebe um vetor de notas e seu tamanho, e calcula a m�dia.
 */
float calculaMedia(float notas[], int n) {
    float soma = 0.0;
    int i;

    // Um loop 'for' percorre todas as posi��es do vetor.
    for (i = 0; i < n; i++) {
        // Acumula a soma de todas as notas.
        soma += notas[i];
    }

    // Retorna a m�dia (soma dividida pela quantidade de notas).
    // Verificamos se n > 0 para evitar divis�o por zero.
    if (n > 0) {
        return soma / n;
    } else {
        return 0.0;
    }
}

/**
 * Exerc�cio 6: Passagem de Matrizes - Preenchimento de Matriz
 * Preenche uma matriz 3x3 com o produto do �ndice da linha pelo da coluna.
 */
void preencheMatriz(int matriz[3][3]) {
    int i, j; // Vari�veis de controle para linha (i) e coluna (j)

    // O primeiro 'for' percorre as linhas da matriz.
    for (i = 0; i < 3; i++) {
        // O segundo 'for' percorre as colunas de cada linha.
        for (j = 0; j < 3; j++) {
            // Atribui o valor do produto dos �ndices � posi��o [i][j].
            matriz[i][j] = i * j;
        }
    }
}

/**
 * Exerc�cio 7: Manipula��o de Caracteres - Vogal ou Consoante
 * Verifica se um dado caractere � uma vogal (mai�scula ou min�scula).
 */
int ehVogal(char letra) {
    // A fun��o tolower() da biblioteca <ctype.h> converte o caractere
    // para min�sculo, simplificando a verifica��o.
    char c = tolower(letra);

    // Usamos um 'switch' para comparar o caractere com todas as vogais.
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return 1; // Se for vogal, retorna 1.
        default:
            return 0; // Caso contr�rio, retorna 0.
    }
}

/**
 * Exerc�cio 8: Vetores e Passagem por Refer�ncia - M�nimo e M�ximo
 * Encontra o menor e o maior valor em um vetor e os retorna por refer�ncia.
 */
void encontraMinMax(int vetor[], int n, int *min, int *max) {
    // Verifica se o vetor n�o est� vazio para evitar erros.
    if (n <= 0) {
        return; // Sai da fun��o se n�o houver elementos.
    }

    // Inicializa 'min' e 'max' com o primeiro elemento do vetor.
    *min = vetor[0];
    *max = vetor[0];

    int i;
    // Percorre o vetor a partir do SEGUNDO elemento (posi��o 1).
    for (i = 1; i < n; i++) {
        // Se o elemento atual for menor que o 'min' atual, atualiza 'min'.
        if (vetor[i] < *min) {
            *min = vetor[i];
        }
        // Se o elemento atual for maior que o 'max' atual, atualiza 'max'.
        if (vetor[i] > *max) {
            *max = vetor[i];
        }
    }
}

/**
 * Exerc�cio 9: L�gica com N�meros - Soma dos D�gitos
 * Calcula e retorna a soma dos d�gitos de um n�mero inteiro positivo.
 */
int somaDigitos(int numero) {
    int soma = 0;
    int digito;

    // O loop continua enquanto o n�mero n�o for zerado.
    while (numero > 0) {
        // O operador '%' (m�dulo) retorna o resto da divis�o.
        // numero % 10 nos d� o �ltimo d�gito.
        digito = numero % 10;

        // Adiciona o d�gito � soma.
        soma += digito;

        // A divis�o inteira por 10 remove o �ltimo d�gito do n�mero.
        numero /= 10; // Equivalente a numero = numero / 10;
    }
    return soma; // Retorna a soma total.
}


/**
 * Exerc�cio 10: Modulariza��o - An�lise de Matriz Quadrada
 */

// 1. Fun��o para ler os valores da matriz
void leMatriz3x3(int mat[3][3]) {
    int i, j;
    printf("Digite os 9 valores para a matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor para mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

// 2. Fun��o para somar os elementos da diagonal principal
// A diagonal principal � onde o �ndice da linha � igual ao da coluna (mat[0][0], mat[1][1], ...).
int somaDiagonalPrincipal3x3(int mat[3][3]) {
    int i;
    int soma = 0;
    for (i = 0; i < 3; i++) {
        soma += mat[i][i];
    }
    return soma;
}

// 3. Fun��o para exibir a matriz na tela
void exibeMatriz3x3(int mat[3][3]) {
    int i, j;
    printf("\n--- Matriz 3x3 ---\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            // Imprime o elemento e um tab para alinhar as colunas.
            printf("%d\t", mat[i][j]);
        }
        // Pula uma linha ao final de cada linha da matriz.
        printf("\n");
    }
    printf("------------------\n");
}
