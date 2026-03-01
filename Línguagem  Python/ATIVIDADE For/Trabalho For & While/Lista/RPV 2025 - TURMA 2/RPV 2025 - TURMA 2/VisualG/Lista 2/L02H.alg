algoritmo "L02H"
// Função: Ler 5 números e mostrar o maior e o menor
// Autor: Mhell Barroca Novaes
// Data : 24/08/2025
// Seção de Declarações
//h. Efetuar a leitura de cinco números inteiros e identificar o maior e o menor valores.
var
num, maior, menor, i: inteiro
inicio
// Seção de Comandos

escreval("Digite o 1º número: ")
leia(num)
maior := num
menor := num

para i de 2 ate 5 faca
   escreval("Digite o ", i, "º número: ")
   leia(num)
   se num > maior entao
      maior := num
   fimse
   se num < menor entao
      menor := num
   fimse
fimpara

escreval("Maior número: ", maior)
escreval("Menor número: ", menor)

fimalgoritmo
