algoritmo "L02A"
// Função: Ler dois valores e apresentar a diferença do maior pelo menor
// Autor: Mhell Barroca Novaes
// Data : 24/08/2025
// Seção de Declarações
//a. Ler dois valores numéricos inteiros e apresentar o resultado da diferença do maior pelo menor valor.
var

num1, num2, diferenca: inteiro

inicio
// Seção de Comandos
escreva("Digite o primeiro número: ")
leia(num1)
escreva("Digite o segundo número: ")
leia(num2)

se (num1 > num2) entao
   diferenca := num1 - num2
senao
   diferenca := num2 - num1
fimse

escreval("A diferença entre o maior e o menor é: ", diferenca)

fimalgoritmo
