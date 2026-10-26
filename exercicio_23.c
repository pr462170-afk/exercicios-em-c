#include <stdio.h>
int main(void) {
    int estoque;
    printf("Quantidade em estoque: ");
    if (scanf("%d", &estoque) != 1 || estoque < 0) return 1;
    if (estoque < 50) printf("Alerta: necessario repor o estoque.\n");
    else printf("Estoque em nivel seguro.\n");
    return 0;
}
