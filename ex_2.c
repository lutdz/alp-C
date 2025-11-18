#include <stdio.h>
#define L 3
#define C 2

int main ()
{

    int matriz [L] [C]; // LINHA E COLUNA

    for (int i = 0; i < L; i++)
        for(int j = 0; j < C; j++){
            printf("Digite um numero:\n");
            scanf("%i", &matriz[i][j]);
        }



    return 0;
}