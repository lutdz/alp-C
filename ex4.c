#include <stdio.h>
int main ()
{
    float media;
    printf("Qual a sua media em ALP?\n");
    scanf("%f", &media);
    if(media >= 7.0){
        printf("Aprovado!\n");
    }else if (media >=2.0){
        printf("Exame!\n");
}
else{
    printf("Reprovado!\n");
}
}