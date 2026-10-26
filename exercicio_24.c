#include <stdio.h>
int main(void) {
    float horas, valorHora, salario;
    printf("Horas trabalhadas na semana: ");
    if (scanf("%f", &horas) != 1 || horas < 0) return 1;
    printf("Valor da hora: R$ ");
    if (scanf("%f", &valorHora) != 1 || valorHora < 0) return 1;
    if (horas > 40) salario = 40*valorHora + (horas-40)*valorHora*1.5f;
    else salario = horas*valorHora;
    printf("Salario semanal: R$ %.2f\n", salario);
    return 0;
}
