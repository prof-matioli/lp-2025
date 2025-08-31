#include <stdio.h>

int main() {
    // Vetor a ser rotacionado.
    int elementos[] = {10, 20, 30, 40, 50};
    int n = sizeof(elementos) / sizeof(elementos[0]);
    
    // Guarda o primeiro elemento, pois ele será sobrescrito.
    int primeiro = elementos[0];
    
    // Desloca cada elemento uma posição para a esquerda.
    for (int i = 0; i < n - 1; i++) {
        elementos[i] = elementos[i + 1];
    }
    
    // Coloca o primeiro elemento (que foi guardado) na última posição.
    elementos[n - 1] = primeiro;
    
    // Imprime o vetor rotacionado.
    printf("Vetor rotacionado:");
    for (int i = 0; i < n; i++) {
        printf(" %d", elementos[i]);
    }
    printf("\n");
    
    return 0;
}
