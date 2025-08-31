#include <stdio.h>

int main() {
    // Vetor de inteiros pré-definido.
    int numeros[] = {2, 7, 4, 9, 6, 1, 8, 3};
    
    // Calcula o número de elementos.
    int n = sizeof(numeros) / sizeof(numeros[0]);
    
    // Contadores para pares e ímpares.
    int pares = 0;
    int impares = 0;
    
    // Percorre o vetor.
    for (int i = 0; i < n; i++) {
        // Verifica se o número é par (resto da divisão por 2 é 0).
        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }
    
    // Imprime os resultados.
    printf("Numeros pares: %d\n", pares);
    printf("Numeros impares: %d\n", impares);

    printf("\n--------------------------------------------\n\n");
            
    return 0;
}
