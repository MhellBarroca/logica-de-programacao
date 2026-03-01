algoritmo "L03C"
// Função : Somar os valores pares de 1 até 500
// Autor : Mhell Barroca Novaes
// Data : 24/08/2025
// Seção de Declarações
//c) Elaborar um programa que apresente no final o somatório dos valores pares existentes na faixa de 1 até 500.
var
i, soma: inteiro
inicio
// Seção de Comandos
i := 1
soma := 0
enquanto (i <= 500) faca
   se (i % 2 = 0) entao
      soma := soma + i
   fimse
   i := i + 1
fimenquanto
escreval("Somatório dos pares de 1 a 500 = ", soma)
fimalgoritmo
