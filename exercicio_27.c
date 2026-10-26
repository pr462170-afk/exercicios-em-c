#include <stdio.h>
int main(void) {
    int idade, contribuicao;
    printf("Idade e anos de contribuicao: ");
    if (scanf("%d %d", &idade, &contribuicao) != 2) return 1;
    if (idade >= 65 || contribuicao >= 35) printf("Elegivel conforme os criterios do exercicio.\n");
    else printf("Nao atende aos criterios do exercicio.\n");
    return 0;
}
