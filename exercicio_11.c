#include <stdio.h>
int main(void) {
    int horas;
    float valorHora, bruto, previdencia, imposto, liquido;
    printf("Horas trabalhadas: ");
    if (scanf("%d", &horas) != 1 || horas < 0) return 1;
    printf("Valor por hora: R$ ");
    if (scanf("%f", &valorHora) != 1 || valorHora < 0) return 1;
    bruto = horas * valorHora;
    previdencia = bruto * 0.11f;
    imposto = bruto * 0.05f;
    liquido = bruto - previdencia - imposto;
    printf("Bruto: R$ %.2f\nPrevidencia (11%%): R$ %.2f\nImposto (5%%): R$ %.2f\nLiquido: R$ %.2f\n", bruto, previdencia, imposto, liquido);
    return 0;
}
