#include <stdio.h>

int main() {
    // Vetor fonte, divisor e declaração do vetor destino.
    int fonte[] = {3, 10, 6, 15, 9, 20};
    int divisor = 5;
    int n_fonte = sizeof(fonte) / sizeof(fonte[0]);
    
    // O vetor destino pode ter no máximo o mesmo tamanho do fonte.
    int destino[n_fonte];
    
    // 'k' é o índice para o vetor 'destino'.
    int k = 0;
    
    // Percorre o vetor 'fonte'.
    for (int i = 0; i < n_fonte; i++) {
        // Se o elemento for múltiplo do divisor...
        if (fonte[i] % divisor == 0) {
            // ...copia para o vetor 'destino' e incrementa o índice de 'destino'.
            destino[k] = fonte[i];
            k++;
        }
    }
    
    // Imprime o vetor 'destino'.
    printf("Vetor destino:");
    for (int i = 0; i < k; i++) {
        printf(" %d", destino[i]);
    }
    printf("\n");
    
    return 0;
}
