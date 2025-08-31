#include <stdio.h>

int main() {
    // Vetor de floats pré-definido.
    float notas[] = {7.5, 8.0, 6.5, 9.0, 5.5};
    
    // Calcula o número de elementos.
    int n = sizeof(notas) / sizeof(notas[0]);
    
    // 'soma' acumulará a soma dos valores.
    float soma = 0.0;
    
    // Percorre todo o vetor, somando cada elemento.
    for (int i = 0; i < n; i++) {
        soma += notas[i];
    }
    
    // Calcula a média.
    float media = soma / n;
    
    // Imprime os resultados formatados.
    printf("Soma: %.1f\n", soma);
    printf("Media: %.1f\n", media);

    printf("\n--------------------------------------------\n\n");
        
    return 0;
}
