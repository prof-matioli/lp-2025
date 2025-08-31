#include <stdio.h>

int main() {
    // Vetor de caracteres e caractere de busca.
    char letras[] = {'a', 'b', 'c', 'a', 'd', 'a'};
    char busca = 'a';
    
    int n = sizeof(letras) / sizeof(letras[0]);
    
    // Contador para as ocorrências.
    int contador = 0;
    
    // Percorre o vetor.
    for (int i = 0; i < n; i++) {
        if (letras[i] == busca) {
            contador++;
        }
    }
    
    // Imprime o resultado.
    printf("O caractere '%c' aparece %d vezes.\n", busca, contador);
    
    return 0;
}
