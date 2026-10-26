#include <stdio.h>
int main(void) {
    float km, litros, precoLitro = 5.80f, rendimento, custoKm;
    printf("Distancia percorrida (km): ");
    if (scanf("%f", &km) != 1 || km < 0) return 1;
    printf("Combustivel consumido (litros): ");
    if (scanf("%f", &litros) != 1 || litros <= 0) return 1;
    rendimento = km / litros;
    custoKm = precoLitro / rendimento;
    printf("Rendimento: %.2f km/l\nCusto medio por km: R$ %.2f (litro a R$ %.2f)\n", rendimento, custoKm, precoLitro);
    return 0;
}
