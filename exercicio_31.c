#include <stdio.h>
int main(void) {
    float consumo, tarifa, total;
    printf("Consumo mensal (kWh): ");
    if (scanf("%f", &consumo) != 1 || consumo < 0) return 1;
    if (consumo <= 100) tarifa = 0.40f;
    else if (consumo <= 250) tarifa = 0.65f;
    else tarifa = 0.90f;
    total = consumo * tarifa + 15.0f;
    printf("Tarifa aplicada: R$ %.2f/kWh\nTotal da conta: R$ %.2f\n", tarifa, total);
    return 0;
}
