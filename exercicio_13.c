#include <stdio.h>
int main(void) {
    float base, altura;
    printf("Base do terreno (m): ");
    if (scanf("%f", &base) != 1 || base < 0) return 1;
    printf("Altura do terreno (m): ");
    if (scanf("%f", &altura) != 1 || altura < 0) return 1;
    printf("Area: %.2f m2\nPerimetro: %.2f m\n", base*altura, 2*(base+altura));
    return 0;
}
