#include <stdio.h>
int main(void) {
    float nota;
    printf("Digite uma nota entre 0 e 10: ");
    if (scanf("%f", &nota) != 1) return 1;
    while (nota < 0.0f || nota > 10.0f) {
        printf("Nota invalida. Digite novamente (0 a 10): ");
        if (scanf("%f", &nota) != 1) return 1;
    }
    printf("Nota valida: %.2f\n", nota);
    return 0;
}
