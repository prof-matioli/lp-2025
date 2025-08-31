#include <stdio.h>

int main() {
    // Vetor de caracteres.
    char palavra[] = {'p', 'r', 'o', 'g', 'r', 'a', 'm', 'a'};
    int n = sizeof(palavra) / sizeof(palavra[0]);
    
    // Contadores.
    int vogais = 0;
    int consoantes = 0;
    
    // Percorre o vetor.
    for (int i = 0; i < n; i++) {
        char letra = palavra[i];
        // Verifica se é uma das vogais minúsculas.
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            vogais++;
        } else {
            consoantes++;
        }
    }
    
    // Imprime os resultados.
    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);
    
    return 0;
}
