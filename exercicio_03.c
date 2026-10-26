#include <stdio.h>
int main(void) {
    float latitude = -23.2050f, longitude = -47.0590f;
    char quadrante = 'S';
    int estacao = 1024;
    printf("%.4f | %.4f | %c | %d\n", latitude, longitude, quadrante, estacao);
    return 0;
}
