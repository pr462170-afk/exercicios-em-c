#include <stdio.h>
int main(void) {
    int opcao;
    float a, b;
    do {
        printf("\n1 - Soma\n2 - Multiplicacao\n0 - Sair\nOpcao: ");
        if (scanf("%d", &opcao) != 1) return 1;
        if (opcao==1 || opcao==2) {
            printf("Digite dois numeros: ");
            if (scanf("%f %f", &a, &b) != 2) return 1;
            if (opcao==1) printf("Resultado: %.2f\n", a+b);
            else printf("Resultado: %.2f\n", a*b);
        } else if (opcao != 0) printf("Opcao invalida.\n");
    } while (opcao != 0);
    printf("Sistema encerrado.\n");
    return 0;
}
