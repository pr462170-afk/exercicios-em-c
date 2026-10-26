#include <stdio.h>
int main(void) {
    int codigo, pagamento;
    float preco, total=0.0f, desconto=0.0f, pagar, recebido, troco;
    printf("Codigo do item (0 encerra): ");
    if (scanf("%d", &codigo) != 1) return 1;
    while (codigo != 0) {
        printf("Preco unitario: R$ ");
        if (scanf("%f", &preco) != 1 || preco < 0) return 1;
        total += preco;
        printf("Codigo do item (0 encerra): ");
        if (scanf("%d", &codigo) != 1) return 1;
    }
    printf("Total bruto: R$ %.2f\nPagamento (1=dinheiro, 2=cartao): ", total);
    if (scanf("%d", &pagamento) != 1) return 1;
    if (pagamento == 1) {
        desconto = total * 0.05f;
        pagar = total - desconto;
        printf("Desconto: R$ %.2f\nTotal com desconto: R$ %.2f\nValor recebido: R$ ", desconto, pagar);
        if (scanf("%f", &recebido) != 1 || recebido < pagar) { printf("Valor recebido insuficiente.\n"); return 1; }
        troco = recebido - pagar;
        printf("Troco: R$ %.2f\n", troco);
    } else if (pagamento == 2) {
        pagar = total;
        printf("Total no cartao: R$ %.2f\n", pagar);
    } else {
        printf("Forma de pagamento invalida.\n"); return 1;
    }
    printf("EXTRATO\nTotal bruto: R$ %.2f\nDesconto: R$ %.2f\nTotal pago: R$ %.2f\n", total, desconto, pagar);
    return 0;
}
