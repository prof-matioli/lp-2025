#include <stdio.h>

int main() {
    // Vetor e caracteres de substituição.
    char frase[] = {'e', 'u', ' ', 'a', 'm', 'o', ' ', 'C'};
    char antigo = 'o';
    char novo = 'a';
    int n = sizeof(frase) / sizeof(frase[0]);
    
    // Percorre o vetor.
    for (int i = 0; i < n; i++) {
        // Se encontrar o caractere antigo, substitui pelo novo.
        if (frase[i] == antigo) {
            frase[i] = novo;
        }
    }
    
    // Imprime o vetor modificado.
    printf("Vetor modificado: ");
    for (int i = 0; i < n; i++) {
        printf("%c", frase[i]);
    }
    printf("\n");
    
    return 0;
}
