#include <stdio.h>
int main(void) {
    int n, i;
    float nota1, nota2, media, somaMedias=0.0f;
    printf("Quantidade de alunos: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;
    for (i=1; i<=n; i++) {
        printf("Notas do aluno %d: ", i);
        if (scanf("%f %f", &nota1, &nota2) != 2) return 1;
        media = (nota1+nota2)/2.0f;
        printf("Media: %.2f - %s\n", media, media>=6.0f ? "Aprovado" : "Reprovado");
        somaMedias += media;
    }
    printf("Media da turma: %.2f\n", somaMedias/n);
    return 0;
}
