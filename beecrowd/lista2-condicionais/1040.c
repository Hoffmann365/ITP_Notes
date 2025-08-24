#include <stdio.h>

int main(){

    float nota1, nota2, nota3, nota4, notaExame, media, mediaFinal;

    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
    
    media = (nota1 * 2 + nota2 * 3 + nota3 * 4 + nota4 * 1) / 10;
    printf("Media: %.1f\n", media);

    if (media >= 7)
    {
        printf("Aluno aprovado.\n");
    }
    else if (media >= 5 && media < 7)
    {
        printf("Aluno em exame.\n");
        scanf("%f", &notaExame);
        printf("Nota do exame: %.1f\n", notaExame);
        mediaFinal = (media + notaExame) / 2;
        if (mediaFinal >= 5)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", mediaFinal);
        }else{
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", mediaFinal);
        }
    }
    else{
        printf("Aluno reprovado.\n");
    }
    
    
    return 0;
}