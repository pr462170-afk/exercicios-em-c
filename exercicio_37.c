#include <stdio.h>
int main(void) {
    int n, i;
    unsigned long long fatorial=1;
    printf("Digite um inteiro entre 0 e 20: ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 20) return 1;
    for (i=n; i>=1; i--) fatorial *= (unsigned long long)i;
    printf("%d! = %llu\n", n, fatorial);
    return 0;
}
