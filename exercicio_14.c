#include <stdio.h>
int main(void) {
    char nome[50], genero;
    int idade;
    float peso;
    printf("Primeiro nome: ");
    if (scanf("%49s", nome) != 1) return 1;
    printf("Idade: ");
    if (scanf("%d", &idade) != 1) return 1;
    printf("Peso (kg): ");
    if (scanf("%f", &peso) != 1) return 1;
    printf("Inicial do genero (M/F): ");
    if (scanf(" %c", &genero) != 1) return 1;
    printf("Nome: %s\nIdade: %d\nPeso: %.2f kg\nGenero: %c\n", nome, idade, peso, genero);
    return 0;
}
