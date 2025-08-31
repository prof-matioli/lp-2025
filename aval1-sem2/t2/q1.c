#include <stdio.h>

int main() {
    // Vetor de inteiros e chave de busca.
    int vet[] = {10, 20, 30, 40, 50};
    int chave = 30;
    
    int n = sizeof(vet) / sizeof(vet[0]);
    
    // 'encontrado' atua como uma flag (0 para falso, 1 para verdadeiro).
    int encontrado = 0;
    int posicao = -1; // -1 indica que não foi encontrado ainda.
    
    // Percorre o vetor.
    for (int i = 0; i < n; i++) {
        if (vet[i] == chave) {
            encontrado = 1;
            posicao = i;
            break; // Para o loop ao encontrar a primeira ocorrência.
        }
    }
    
    // Verifica a flag para imprimir a mensagem correta.
    if (encontrado) {
        printf("Valor encontrado na posicao: %d\n", posicao);
    } else {
        printf("Valor nao foi encontrado.\n");
    }
    
    return 0;
}
