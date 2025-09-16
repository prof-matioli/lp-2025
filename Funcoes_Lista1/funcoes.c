// Salve este conteúdo em um arquivo chamado "funcoes.c"

#include "funcoes.h" // Inclui os protótipos para garantir consistência
#include <stdio.h>    // Necessário para funções de entrada/saída como printf e scanf
#include <ctype.h>    // Necessário para a função tolower() no Exercício 7

// --- Implementação das Funções ---

/**
 * Exercício 1: Passagem por Valor - Conversão de Medidas
 * Recebe um valor em metros e o converte para centímetros.
 * Como 1 metro = 100 centímetros, basta multiplicar o valor por 100.
 */
int converteParaCentimetros(int metros) {
    // A função retorna o resultado do cálculo.
    return metros * 100;
}

/**
 * Exercício 2: Lógica com Retorno - Verificação de Maioridade
 * Verifica se a idade fornecida é maior ou igual a 18.
 */
int ehMaiorDeIdade(int idade) {
    // Usamos uma estrutura condicional (if-else) para verificar a idade.
    if (idade >= 18) {
        return 1; // Retorna 1 se for maior de idade
    } else {
        return 0; // Retorna 0 caso contrário
    }
}

/**
 * Exercício 3: Escopo de Variáveis - Contador de Chamadas
 * Esta é a definição da variável global. Ela é inicializada com 0.
 * Por ser global, seu valor persiste entre as chamadas da função.
 */
int contador = 0;

void contaChamada(void) {
    // A cada chamada desta função, o valor da variável global 'contador'
    // é incrementado em 1.
    contador++;
}

/**
 * Exercício 4: Passagem por Referência - Operações Múltiplas
 * Recebe o ENDEREÇO de duas variáveis inteiras.
 * O '*' antes do nome do parâmetro indica que ele é um ponteiro.
 */
void calculaDobroTriplo(int *a, int *b) {
    // Para acessar ou modificar o VALOR no endereço apontado, usamos o operador '*'.
    // Altera o valor da primeira variável para o seu dobro.
    *a = *a * 2;
    // Altera o valor da segunda variável para o seu triplo.
    *b = *b * 3;
}

/**
 * Exercício 5: Passagem de Vetores - Análise de Notas
 * Recebe um vetor de notas e seu tamanho, e calcula a média.
 */
float calculaMedia(float notas[], int n) {
    float soma = 0.0;
    int i;

    // Um loop 'for' percorre todas as posições do vetor.
    for (i = 0; i < n; i++) {
        // Acumula a soma de todas as notas.
        soma += notas[i];
    }

    // Retorna a média (soma dividida pela quantidade de notas).
    // Verificamos se n > 0 para evitar divisão por zero.
    if (n > 0) {
        return soma / n;
    } else {
        return 0.0;
    }
}

/**
 * Exercício 6: Passagem de Matrizes - Preenchimento de Matriz
 * Preenche uma matriz 3x3 com o produto do índice da linha pelo da coluna.
 */
void preencheMatriz(int matriz[3][3]) {
    int i, j; // Variáveis de controle para linha (i) e coluna (j)

    // O primeiro 'for' percorre as linhas da matriz.
    for (i = 0; i < 3; i++) {
        // O segundo 'for' percorre as colunas de cada linha.
        for (j = 0; j < 3; j++) {
            // Atribui o valor do produto dos índices à posição [i][j].
            matriz[i][j] = i * j;
        }
    }
}

/**
 * Exercício 7: Manipulação de Caracteres - Vogal ou Consoante
 * Verifica se um dado caractere é uma vogal (maiúscula ou minúscula).
 */
int ehVogal(char letra) {
    // A função tolower() da biblioteca <ctype.h> converte o caractere
    // para minúsculo, simplificando a verificação.
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
            return 0; // Caso contrário, retorna 0.
    }
}

/**
 * Exercício 8: Vetores e Passagem por Referência - Mínimo e Máximo
 * Encontra o menor e o maior valor em um vetor e os retorna por referência.
 */
void encontraMinMax(int vetor[], int n, int *min, int *max) {
    // Verifica se o vetor não está vazio para evitar erros.
    if (n <= 0) {
        return; // Sai da função se não houver elementos.
    }

    // Inicializa 'min' e 'max' com o primeiro elemento do vetor.
    *min = vetor[0];
    *max = vetor[0];

    int i;
    // Percorre o vetor a partir do SEGUNDO elemento (posição 1).
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
 * Exercício 9: Lógica com Números - Soma dos Dígitos
 * Calcula e retorna a soma dos dígitos de um número inteiro positivo.
 */
int somaDigitos(int numero) {
    int soma = 0;
    int digito;

    // O loop continua enquanto o número não for zerado.
    while (numero > 0) {
        // O operador '%' (módulo) retorna o resto da divisão.
        // numero % 10 nos dá o último dígito.
        digito = numero % 10;

        // Adiciona o dígito à soma.
        soma += digito;

        // A divisão inteira por 10 remove o último dígito do número.
        numero /= 10; // Equivalente a numero = numero / 10;
    }
    return soma; // Retorna a soma total.
}


/**
 * Exercício 10: Modularização - Análise de Matriz Quadrada
 */

// 1. Função para ler os valores da matriz
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

// 2. Função para somar os elementos da diagonal principal
// A diagonal principal é onde o índice da linha é igual ao da coluna (mat[0][0], mat[1][1], ...).
int somaDiagonalPrincipal3x3(int mat[3][3]) {
    int i;
    int soma = 0;
    for (i = 0; i < 3; i++) {
        soma += mat[i][i];
    }
    return soma;
}

// 3. Função para exibir a matriz na tela
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
