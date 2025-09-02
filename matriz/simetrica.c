#include <stdio.h>

int main()
{
    int matriz[3][3] = {{1,2,3},
                        {2,5,6},
                        {3,6,9}};

    //exibe a matriz
    for(int l=0; l<3; l++)
    {
        for(int c=0; c<3; c++)
        {
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }

    //imprime apenas o que estiver acima da diagonal principal
    int ehSimetrica=1;
    printf("\n-------------------------------\n");
    for(int l=0; l<3; l++)
    {
        for(int c=l; c<3; c++)
        {
            if(matriz[l][c]!=matriz[c][l])
            {
              ehSimetrica=0;
            }
        }
    }
    if(ehSimetrica)
        printf("\nEh simetrica!\n");
    else
        printf("\nNao eh simetrica!\n");

    return 0;
}