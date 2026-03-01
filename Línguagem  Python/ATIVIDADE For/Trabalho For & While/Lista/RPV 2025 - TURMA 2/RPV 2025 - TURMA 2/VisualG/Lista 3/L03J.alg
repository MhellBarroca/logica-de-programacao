algoritmo "L03J"
// Função : Calcular soma e média dos pares de 50 até 70
// Autor : Mhell Barroca Novaes
// Data : 24/08/2025
// Seção de Declarações
//Elaborar um programa que apresente os resultados da soma e da média aritmética dos valores pares situados na faixa numérica de 50 a 70.
var
media: real
i, qtd, soma: inteiro
inicio
// Seção de Comandos
i := 50
qtd := 0
soma := 0
enquanto (i <= 70) faca
   se (i % 2 = 0) entao
      soma := soma + i
      qtd := qtd + 1
   fimse
   i := i + 1
fimenquanto
media := soma / qtd
escreval("Somatório dos pares = ", soma)
escreval("Média dos pares = ", media:0:2)
fimalgoritmo
