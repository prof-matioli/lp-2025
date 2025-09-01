#include <stdio.h>

int main()
{
    int mat[3][3] = {   {1,2,3},
                        {4,5,6},
                        {7,8,9}
                    };
    int diag_princ = 0, diag_sec = 0;

    for(int i = 0; i < 3; i++) {
        diag_princ += mat[i][i];
        diag_sec += mat[i][2 - i];
    }
    printf("Diagonal principal: %d \nDiagonal secundária:%d", diag_princ,diag_sec);

    printf("\n-----------------------------------\n\n");
    return 0;
}