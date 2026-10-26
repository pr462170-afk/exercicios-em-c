#include <stdio.h>
int main(void) {
    int a1, r, n, i;
    printf("Termo inicial, razao e quantidade de termos: ");
    if (scanf("%d %d %d", &a1, &r, &n) != 3 || n <= 0) return 1;
    for (i=0; i<n; i++) printf("%s%d", i==0 ? "" : ", ", a1+i*r);
    printf("\n");
    return 0;
}
