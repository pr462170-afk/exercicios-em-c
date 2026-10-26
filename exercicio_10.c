#include <stdio.h>
int main(void) {
    float c, f, k;
    printf("Temperatura em Celsius: ");
    if (scanf("%f", &c) != 1) return 1;
    f = (c * 9.0f / 5.0f) + 32.0f;
    k = c + 273.15f;
    printf("Fahrenheit: %.2f F\nKelvin: %.2f K\n", f, k);
    return 0;
}
