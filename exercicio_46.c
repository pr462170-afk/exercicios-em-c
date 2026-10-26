#include <stdio.h>
int main(void) {
    int idade, quantidade=0, maiorIdade=0;
    float salario, somaSalarios=0.0f;
    printf("Idade (negativa encerra): ");
    if (scanf("%d", &idade) != 1) return 1;
    while (idade >= 0) {
        printf("Salario mensal: R$ ");
        if (scanf("%f", &salario) != 1 || salario < 0) return 1;
        quantidade++;
        somaSalarios += salario;
        if (quantidade==1 || idade>maiorIdade) maiorIdade=idade;
        printf("Idade (negativa encerra): ");
        if (scanf("%d", &idade) != 1) return 1;
    }
    if (quantidade > 0) printf("Entrevistados: %d\nMedia salarial: R$ %.2f\nMaior idade: %d\n", quantidade, somaSalarios/quantidade, maiorIdade);
    else printf("Nenhum cidadao entrevistado.\n");
    return 0;
}
