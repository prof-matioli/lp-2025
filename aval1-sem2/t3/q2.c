#include <stdio.h>

int main() {
    // Dois vetores de caracteres para comparar.
    char str1[] = {'t', 'e', 's', 't', 'e'};
    char str2[] = {'t', 'e', 's', 't', 'e'};
    
    int n1 = sizeof(str1) / sizeof(str1[0]);
    int n2 = sizeof(str2) / sizeof(str2[0]);
    
    // Flag que assume que são iguais até que se prove o contrário.
    int sao_iguais = 1;
    
    // Se os tamanhos forem diferentes, não podem ser iguais.
    if (n1 != n2) {
        sao_iguais = 0;
    } else {
        // Se os tamanhos forem iguais, compara elemento por elemento.
        for (int i = 0; i < n1; i++) {
            if (str1[i] != str2[i]) {
                sao_iguais = 0; // Se encontrar uma diferença, marca e para.
                break;
            }
        }
    }
    
    // Imprime o resultado com base na flag.
    if (sao_iguais) {
        printf("IGUAIS\n");
    } else {
        printf("DIFERENTES\n");
    }
    
    return 0;
}
