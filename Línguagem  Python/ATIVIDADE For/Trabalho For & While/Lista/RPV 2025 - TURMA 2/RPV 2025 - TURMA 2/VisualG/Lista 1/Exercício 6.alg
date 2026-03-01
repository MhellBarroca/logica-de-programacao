   algoritmo "Desconto"
// Função : Porcentagem
// Autor : Mhell Barroca Novaes
// Data : 19/08/2025
// Seção de Declarações 
//6. Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo em vista que o desconto foi de 12%.
var
valor_produto,prod_desc: REAL
inicio
// Seção de Comandos 
Escreva("Digite o valor do produto: ")
Leia (valor_produto)

prod_desc := valor_produto - (valor_produto * 0.12)

Escreva("O valor com desconto de 12% é: ", prod_desc)


fimalgoritmo

