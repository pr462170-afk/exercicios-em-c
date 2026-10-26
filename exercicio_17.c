#include <stdio.h>
int main(void) {
    int idade;
    printf("Idade: ");
    if (scanf("%d", &idade) != 1) return 1;
    if (idade >= 18) printf("Pode iniciar o processo de habilitacao.\n");
    else printf("Ainda e menor de idade.\n");
    return 0;
}
