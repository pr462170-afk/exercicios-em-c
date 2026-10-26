#include <stdio.h>
int main(void) {
    int id, bloqueado;
    printf("ID do cracha e bloqueado (1=sim, 0=nao): ");
    if (scanf("%d %d", &id, &bloqueado) != 2) return 1;
    if (id == 1001 && !bloqueado) printf("Acesso permitido.\n");
    else printf("Acesso negado.\n");
    return 0;
}
