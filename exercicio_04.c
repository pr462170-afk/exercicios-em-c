#include <stdio.h>
int main(void) {
    int requisicoes = 12500;
    float memoria = 68.5f;
    char estado = 'A';
    char protocolo[] = "HTTPS";
    printf("Diagnostico: requisicoes=%d, memoria=%.1f%%, estado=%c, protocolo=%s\n", requisicoes, memoria, estado, protocolo);
    return 0;
}
