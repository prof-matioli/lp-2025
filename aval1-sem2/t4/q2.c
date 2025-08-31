#include <stdio.h>

int main() {
    // Vetor a ser verificado.
    int numeros[] = {1, 2, 3, 2, 1};
    int n = sizeof(numeros) / sizeof(numeros[0]);
    
    // Flag que assume que é um palíndromo.
    int eh_palindromo = 1;
    
    // Compara os elementos das extremidades, indo em direção ao centro.
    for (int i = 0; i < n / 2; i++) {
        if (numeros[i] != numeros[n - 1 - i]) {
            eh_palindromo = 0; // Se achar uma diferença, não é palíndromo.
            break;
        }
    }
    
    // Imprime o resultado.
    if (eh_palindromo) {
        printf("PALINDROMO\n");
    } else {
        printf("NAO PALINDROMO\n");
    }
    
    return 0;
}
