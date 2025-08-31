#include <stdio.h>

int main() {
    // Vetor de inteiros pré-definido.
    int vet[] = {15, 8, 25, 3, 19, 12};
    
    // Calcula o número de elementos do vetor.
    int n = sizeof(vet) / sizeof(vet[0]);
    
    // Inicializa 'maior' e 'menor' com o primeiro elemento como referência.
    int maior = vet[0];
    int menor = vet[0];
    
    // Percorre o vetor a partir do segundo elemento (índice 1).
    for (int i = 1; i < n; i++) {
        // Se o elemento atual for maior que o 'maior' registrado, atualiza 'maior'.
        if (vet[i] > maior) {
            maior = vet[i];
        }
        // Se o elemento atual for menor que o 'menor' registrado, atualiza 'menor'.
        if (vet[i] < menor) {
            menor = vet[i];
        }
    }
    
    // Imprime os resultados.
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    printf("\n--------------------------------------------\n\n");
    
    return 0;
}
