algoritmo "L03A"
// Função : Apresentar os resultados de uma tabuada de multiplicar (de 1 até 10)
// Autor : Mhell Barroca Novaes
// Data : 24/08/2025
// Seção de Declarações
//a) Apresentar os resultados de uma tabuada de multiplicar (de 1 até 10) de um número qualquer.
var
numero, i, resultado: inteiro
inicio
// Seção de Comandos

escreva("Digite um número para ver a tabuada: ")
leia(numero)

i := 1
enquanto (i <= 10) faca
   resultado := numero * i
   escreval(numero, " x ", i, " = ", resultado)
   i := i + 1
fimenquanto

fimalgoritmo
