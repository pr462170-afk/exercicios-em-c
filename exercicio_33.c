#include <stdio.h>
int main(void) {
    int n, i;
    printf("Digite um numero: ");
    if (scanf("%d", &n) != 1) return 1;
    for (i=1; i<=10; i++) printf("%d x %d = %d\n", n, i, n*i);
    return 0;
}
