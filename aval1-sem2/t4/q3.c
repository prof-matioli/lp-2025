#include <stdio.h>

int main() {
    // Vetor de caracteres a ser verificado.
    char palavra[] = {'a', 'r', 'a', 'r', 'a'};
    int n = sizeof(palavra) / sizeof(palavra[0]);
    
    // A lógica é idêntica à da questão anterior.
    int eh_palindromo = 1;
    
    for (int i = 0; i < n / 2; i++) {
        if (palavra[i] != palavra[n - 1 - i]) {
            eh_palindromo = 0;
            break;
        }
    }
    
    if (eh_palindromo) {
        printf("PALINDROMO\n");
    } else {
        printf("NAO PALINDROMO\n");
    }
    
    return 0;
}
