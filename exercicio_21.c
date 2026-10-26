#include <stdio.h>
int main(void) {
    float total, desconto = 0.0f;
    printf("Valor da compra: R$ ");
    if (scanf("%f", &total) != 1 || total < 0) return 1;
    if (total > 250.0f) desconto = total * 0.10f;
    printf("Desconto: R$ %.2f\nTotal a pagar: R$ %.2f\n", desconto, total-desconto);
    return 0;
}
