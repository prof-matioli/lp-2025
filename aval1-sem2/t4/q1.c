#include <stdio.h>

int main() {
    // Vetor a ser invertido.
    int vet[] = {1, 2, 3, 4, 5};
    int n = sizeof(vet) / sizeof(vet[0]);
    
    // Variável temporária para a troca de valores.
    int temp;
    
    // O loop vai apenas até a metade, trocando os elementos das extremidades.
    for (int i = 0; i < n / 2; i++) {
        // Troca o elemento vet[i] com o seu correspondente vet[n - 1 - i].
        temp = vet[i];
        vet[i] = vet[n - 1 - i];
        vet[n - 1 - i] = temp;
    }
    
    // Imprime o vetor invertido.
    printf("Vetor invertido:");
    for (int i = 0; i < n; i++) {
        printf(" %d", vet[i]);
    }
    printf("\n");
    
    return 0;
}
