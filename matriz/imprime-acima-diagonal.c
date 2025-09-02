#include <stdio.h>

int main()
{
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

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
    printf("\n-------------------------------\n");
    for(int l=0; l<3; l++)
    {
        for(int c=l; c<3; c++)
        {
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }
    return 0;
}