#include <stdio.h>
int main(void) {
    int total, horas, minutos, segundos;
    printf("Total de segundos: ");
    if (scanf("%d", &total) != 1 || total < 0) return 1;
    horas = total / 3600;
    minutos = (total % 3600) / 60;
    segundos = total % 60;
    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
    return 0;
}
