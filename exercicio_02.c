#include <stdio.h>
int main(void) {
    float teclado = 89.90f, mouse = 45.50f, monitor = 850.00f;
    printf("%-12s R$ %7.2f\n", "Teclado", teclado);
    printf("%-12s R$ %7.2f\n", "Mouse", mouse);
    printf("%-12s R$ %7.2f\n", "Monitor", monitor);
    return 0;
}
