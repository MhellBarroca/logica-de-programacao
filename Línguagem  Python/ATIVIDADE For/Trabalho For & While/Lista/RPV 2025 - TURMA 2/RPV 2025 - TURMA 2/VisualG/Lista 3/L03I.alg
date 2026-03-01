algoritmo "L03I"
// Função : Ler 10 valores e mostrar soma e média aritmética
// Autor : Mhell Barroca Novaes
// Data : 24/08/2025
// Seção de Declarações
//Elaborar um programa que efetue a leitura de 10 valores numéricos e apresente no final o total do somatório e a média aritmética dos valores lidos
var
cont: inteiro
x, soma, media: real
inicio
// Seção de Comandos
cont := 1
soma := 0
enquanto (cont <= 10) faca
   escreva("Digite o ", cont, "º valor: ")
   leia(x)
   soma := soma + x
   cont := cont + 1
fimenquanto
media := soma / 10
escreval("Somatório = ", soma:0:2)
escreval("Média = ", media:0:2)
fimalgoritmo
