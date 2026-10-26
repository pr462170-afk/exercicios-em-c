#include <stdio.h>
int main(void) {
    int i;
    float temperatura, maxima=0.0f, minima=0.0f;
    for (i=1; i<=7; i++) {
        printf("Temperatura do dia %d: ", i);
        if (scanf("%f", &temperatura) != 1) return 1;
        if (i==1) maxima=minima=temperatura;
        else {
            if (temperatura>maxima) maxima=temperatura;
            if (temperatura<minima) minima=temperatura;
        }
    }
    printf("Maxima: %.2f C\nMinima: %.2f C\n", maxima, minima);
    return 0;
}
