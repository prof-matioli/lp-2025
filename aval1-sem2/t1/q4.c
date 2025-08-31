#include <stdio.h>

int main() {
    // Vetor de inteiros pré-definido.
    int valores[] = {10, 5, 20, 8, 15, 20};
    
    // Calcula o número de elementos.
    int n = sizeof(valores) / sizeof(valores[0]);
    
    // Inicializa 'maior' com o primeiro elemento para começar a busca.
    int maior = valores[0];
    
    // Primeiro, encontra o maior valor no vetor.
    for (int i = 1; i < n; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
        }
    }
    
    // Inicializa 'segundo_maior' com um valor que certamente será menor
    // que qualquer valor do vetor, para garantir a primeira atribuição correta.
    // Como não podemos usar <limits.h>, uma alternativa é encontrar o primeiro
    // elemento que seja diferente do maior e usá-lo como valor inicial.
    // Vamos usar a abordagem de inicializar com o primeiro elemento e ajustar.
    int segundo_maior = valores[0];
    // Se o primeiro elemento for o maior, precisamos de um ponto de partida diferente.
    if (segundo_maior == maior) {
        // Encontra o primeiro valor diferente do maior para inicializar segundo_maior
        for (int i = 1; i < n; i++) {
            if(valores[i] < maior) {
                segundo_maior = valores[i];
                break;
            }
        }
    }
    
    // Agora, procura pelo segundo maior.
    for (int i = 0; i < n; i++) {
        // O valor deve ser maior que o 'segundo_maior' atual
        // E, crucialmente, ser menor que o 'maior' absoluto.
        if (valores[i] > segundo_maior && valores[i] < maior) {
            segundo_maior = valores[i];
        }
    }
    
    // Imprime o resultado.
    printf("Segundo maior valor: %d\n", segundo_maior);

    printf("\n--------------------------------------------\n\n");
 
    return 0;
}
