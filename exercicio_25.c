#include <stdio.h>
int main(void) {
    float media, frequencia;
    printf("Media e frequencia (%%): ");
    if (scanf("%f %f", &media, &frequencia) != 2) return 1;
    if (media >= 6.0f && frequencia >= 75.0f) printf("Aprovado.\n");
    else if (frequencia >= 75.0f && media >= 4.0f && media < 6.0f) printf("Exame de recuperacao.\n");
    else printf("Reprovado.\n");
    return 0;
}
