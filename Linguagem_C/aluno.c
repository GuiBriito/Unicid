#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>


struct Aluno{
    int matricula;
    char nome[50];
    float media;
};



int main()
{
    struct Aluno aluno1;

    aluno1.matricula = 12345;
    strcpy(aluno1.nome, "joao");
    aluno1.media = 8.7;

    printf("===dados do aluno===\n");
    printf("matricula; %d\n", aluno1.nome);
    printf("media: %.2f\n", aluno1.media);

    struct Aluno turma [2] ={

    { 11111, "joao pereira", 7.5},
    { 22222, "ana clara", 9.0}

};

printf("\n===Turma===\n");
for(int i = 0; i<2; i++) {
    printf("aluno %d: %s (matricula: %d) - Media: %.2f\n",
           i=1, turma[i].nome, turma[i].matricula, turma[i].media );
}
return 0;
}
