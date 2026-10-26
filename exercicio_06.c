#include <stdio.h>
int main(void) {
    int agencia = 1234, conta = 567890;
    float valor = 275.90f;
    char canal = 'A';
    printf("COMPROVANTE DE TRANSFERENCIA\n\nAgencia remetente: %d\n\nConta destino: %d\n\nValor: R$ %.2f\n\nCanal: %c\n", agencia, conta, valor, canal);
    return 0;
}
