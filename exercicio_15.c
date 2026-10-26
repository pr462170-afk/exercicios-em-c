#include <stdio.h>
int main(void) {
    float n1, n2, n3, media;
    printf("Digite tres notas: ");
    if (scanf("%f %f %f", &n1, &n2, &n3) != 3) return 1;
    media = (n1*2.0f + n2*3.0f + n3*5.0f) / 10.0f;
    printf("Media ponderada: %.2f\n", media);
    return 0;
}
