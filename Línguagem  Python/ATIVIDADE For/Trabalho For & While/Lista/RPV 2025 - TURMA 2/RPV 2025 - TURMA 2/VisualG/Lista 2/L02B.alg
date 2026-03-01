algoritmo "L02B"
// Função: Ler um número e apresentar o módulo (valor positivo)
// Autor: Mhell Barroca Novaes
// Data : 24/08/2025
// Seção de Declarações
//b. Efetuar a leitura de um valor inteiro positivo ou negativo e apresentar o número lido como sendo um valor positivo, ou seja, o programa deverá
//apresentar o módulo de um número fornecido. Lembre-se de verificar se o número fornecido é menor que zero; sendo, multiplique-o por -1.

var
numero: inteiro

inicio
escreva("Digite um número inteiro (positivo ou negativo): ")
leia(numero)

se numero < 0 entao
      numero := numero * -1
   fimse

   escreval("O módulo do número é: ", numero)
fimalgoritmo
