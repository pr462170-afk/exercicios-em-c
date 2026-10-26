#include <stdio.h>
int main(void) {
    char circuito[] = "CI-NE555";
    float tensao = 5.0f;
    int lote = 202610;
    char eficiencia = 'A';
    printf("FICHA TECNICA\nCircuito: %s\nTensao nominal: %.1f V\nLote: %d\nClasse energetica: %c\n", circuito, tensao, lote, eficiencia);
    return 0;
}
