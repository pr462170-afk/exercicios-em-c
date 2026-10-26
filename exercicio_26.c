#include <stdio.h>
int main(void) {
    float massa, altura, imc;
    printf("Massa (kg) e altura (m): ");
    if (scanf("%f %f", &massa, &altura) != 2 || massa < 0 || altura <= 0) return 1;
    imc = massa / (altura*altura);
    printf("IMC: %.2f\n", imc);
    if (imc < 18.5f) printf("Magreza\n");
    else if (imc < 25.0f) printf("Peso adequado\n");
    else if (imc < 30.0f) printf("Sobrepeso\n");
    else printf("Obesidade\n");
    return 0;
}
