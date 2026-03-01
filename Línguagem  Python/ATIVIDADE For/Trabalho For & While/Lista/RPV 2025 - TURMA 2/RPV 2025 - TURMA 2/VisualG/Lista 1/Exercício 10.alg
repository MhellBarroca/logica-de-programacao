algoritmo "Ajuda_Vendedores"
// Função : Auxilia vendedores com cálculos de desconto, parcelamento e comissão
// Autor : Mhell Barroca Novaes
// Data : 20/08/2025
// Seção de Declarações
//. Escreva um programa de ajuda para vendedores. A partir de um valor totallido, mostre:
//• O total a pagar com desconto de 10%;
//• O valor de cada parcela, no parcelamento de 3× sem juros;
//• A comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto)
//• A comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total
var
valor_total, valor_com_desconto, valor_parcela: real
comissao_vista, comissao_parcelado: real
inicio
// Seção de Comandos

escreva("Digite o valor total da venda: R$ ")
leia(valor_total)

valor_com_desconto := valor_total * 0.90
valor_parcela := valor_total / 3
comissao_vista := valor_com_desconto * 0.05
comissao_parcelado := valor_total * 0.05

escreval()
escreval(">>> RESULTADOS <<<")
escreval("Total com 10% de desconto (à vista): R$ ", valor_com_desconto:6:2)
escreval("Valor de cada parcela (3x sem juros): R$ ", valor_parcela:6:2)
escreval("Comissão do vendedor (venda à vista): R$ ", comissao_vista:6:2)
escreval("Comissão do vendedor (venda parcelada): R$ ", comissao_parcelado:6:2)

fimalgoritmo
