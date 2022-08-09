#include <stdio.h>
#include <stdlib.h>

// Autor: João

int main()
{
    float nota1, nota2, nota3, nota4, media;
    nota1 = nota2 = nota3 = nota4 = media = 0;

    printf("\t\t\t\t\tMedia Escolar 1.0\n");
    printf("Ola, Digite sua nota primeira nota bimestral:\n ");
    scanf("%f", &nota1);

    printf("\t\t\t\t\tMedia Escolar 1.0\n");
    printf("Ola, Digite sua segunda nota bimestral:\n ");
    scanf("%f", &nota2);

    printf("\t\t\t\t\tMedia Escolar 1.0\n");
    printf("Ola, Digite sua terceira nota bimestral:\n ");
    scanf("%f", &nota3);

    printf("\t\t\t\t\tMedia Escolar 1.0\n");
    printf("Ola, Digite sua quarta nota bimestral:\n ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota4 + nota4) / 4;

    printf("A sua media escolar foi de: %f\n\n", media);

//Verifica se a media é maior ou igual a 7
// se for ele imprime uma mensagem de aprovado
// senão ele vai para próxima e imprime que você foi reprovado

    if(media >= 7)
    {
        printf("Voce foi aprovado!\n\\");
    }else{
        printf("Hmm Voce foi reprovado :( \n\n");
    }

// Após sair da condição de verificação ele saí do programa e fecha
    return 0;
}
