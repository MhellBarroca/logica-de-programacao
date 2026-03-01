algoritmo "L02G"
// Função: Ler 4 números e mostrar os divisíveis por 2 e 3
// Autor: Mhell Barroca Novaes
// Data : 24/08/2025
// Seção de Declarações
//g. Efetuar a leitura de quatro números inteiros e apresentar os números que são divisíveis por 2 e 3.
var
num, i: inteiro
inicio
// Seção de Comandos

para i de 1 ate 4 faca
   escreval("Digite o ", i, "º número: ")
   leia(num)

   se (num mod 2 = 0) e (num mod 3 = 0) entao
      escreval("O número ", num, " é divisível por 2 e 3.")
   fimse
fimpara
fimalgoritmo
