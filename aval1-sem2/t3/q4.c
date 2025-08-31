#include <stdio.h>

int main() {
    // Vetores de origem.
    char inicio[] = {'o', 'l', 'a'};
    char fim[] = {'m', 'u', 'n', 'd', 'o'};
    
    int n_inicio = sizeof(inicio) / sizeof(inicio[0]);
    int n_fim = sizeof(fim) / sizeof(fim[0]);
    
    // O vetor resultado precisa ter o tamanho da soma dos outros dois.
    int n_resultado = n_inicio + n_fim;
    char resultado[n_resultado];
    
    // Copia o primeiro vetor para o início do resultado.
    for (int i = 0; i < n_inicio; i++) {
        resultado[i] = inicio[i];
    }
    
    // Copia o segundo vetor para o resultado, a partir do final do primeiro.
    for (int j = 0; j < n_fim; j++) {
        resultado[n_inicio + j] = fim[j];
    }
    
    // Imprime o vetor concatenado.
    printf("Resultado: ");
    for (int i = 0; i < n_resultado; i++) {
        printf("%c", resultado[i]);
    }
    printf("\n");
    
    return 0;
}
