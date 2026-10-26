#include <stdio.h>
int main(void) {
    float renda, parcela;
    int inadimplente;
    printf("Renda mensal e valor da parcela: ");
    if (scanf("%f %f", &renda, &parcela) != 2 || renda < 0 || parcela < 0) return 1;
    printf("Situacao cadastral (0=adimplente, 1=inadimplente): ");
    if (scanf("%d", &inadimplente) != 1) return 1;
    if (parcela <= renda*0.30f && inadimplente == 0) printf("Credito aprovado.\n");
    else printf("Credito recusado.\n");
    return 0;
}
