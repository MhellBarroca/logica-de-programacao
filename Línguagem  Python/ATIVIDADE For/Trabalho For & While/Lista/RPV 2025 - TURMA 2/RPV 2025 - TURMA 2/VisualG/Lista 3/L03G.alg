algoritmo "L03G"
// Função : Mostrar os 15 primeiros termos da série de Fibonacci
// Autor : Mhell Barroca Novaes
// Data : 24/08/2025
// Seção de Declarações
//g)Escreva um programa que apresente a série de Fibonacci até o décimo quinto termo.A série deFibonacci é formada pela seqüência:
//1,1,2,3,5,8,13,21,34, ..., etc. Esta série se caracteriza pela soma de um termo atual com o seu anterior subseqüente, para que seja formado o próximo
//valor da seqüência. Portanto começando com os números 1, 1 o próximo termo é 1+1=2, o próximo é 1+2=3, o próximo é 2+3=5, o próximo 3+5=8, etc.
var
a, b, prox, cont: inteiro
inicio
// Seção de Comandos
a := 1
b := 1
cont := 1
enquanto (cont <= 15) faca
   escreval(a)
   prox := a + b
   a := b
   b := prox
   cont := cont + 1
fimenquanto
fimalgoritmo
