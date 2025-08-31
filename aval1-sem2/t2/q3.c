#include <stdio.h>

int main() {
    // Vetor de inteiros.
    int valores[] = {5, 10, 15, 20, 25};
    int n = sizeof(valores) / sizeof(valores[0]);
    
    float soma = 0;
    
    // Primeiro, calcula a soma de todos os elementos.
    for (int i = 0; i < n; i++) {
        soma += valores[i];
    }
    
    // Calcula a média.
    float media = soma / n;
    
    // Contador para elementos maiores que a média.
    int contador = 0;
    
    // Segundo, compara cada elemento com a média.
    for (int i = 0; i < n; i++) {
        if (valores[i] > media) {
            contador++;
        }
    }
    
    // Imprime os resultados.
    printf("Media: %.1f\n", media);
    printf("Elementos maiores que a media: %d\n", contador);
    
    return 0;
}
