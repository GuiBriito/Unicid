#include <stdio.h>

int main()
{
    float A1, A2, media;
    int A3;
    printf("Digite a primeira nota:");
    scanf("%f", &A1);
    printf("Digite a segunda nota:");
    scanf("%f", &A2);
    printf("Digite a terceira nota:");
    scanf("%d", &A3);

    media= (A1 + A2 + A3 ) /3;
    if (media >= 6){
        printf("Voce foi aprovado com a media: %.1f", media);
    } else {
        printf("Voce foi reprovado com a media: %.1f", media);

    }


}
