#include <stdio.h>
int main ()
{
    int idade;
    printf("Qual a sua idade?\n");
    scanf("%i", &idade);
    if(idade >= 18)
        printf("Você pode emitir CNH!\n");
    else printf("Você não tem idade necessaria!/n");
return 0;
}