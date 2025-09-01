#include <stdio.h>

int main()
{
    char musicas[10][30] = {"Musica 1","Musica 2","Musica 3"};

    for(int i=0; i<3; i++){
        printf("Musica %d) %s\n",i+1, musicas[i]);
    }

    printf("\n===================================\n");
    return 0;
}