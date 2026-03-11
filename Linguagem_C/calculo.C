#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[])
{
    double base, altura, perimetro, area;

    printf("entre com a base: ");
    scanf("%lf", &base);
    printf("entre com a altura: ");
    scanf("%lf", &altura);

    perimetro = 2 * (base + altura);

    area= base * altura;

    printf("O perimetro do retangulo eh: %4.1lf", perimetro);

    printf("\nA area do retangulo eh: %4.1lf\n", area);

    system("PAUSE");
}
