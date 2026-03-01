algoritmo "L03L"
// Função : Ler inteiros positivos até digitar um negativo; mostrar maior e menor
// Autor : Mhell Barroca Novaes
// Data : 24/08/2025
// Seção de Declarações
//Elaborar um programa que efetue a leitura de valores positivos inteiros até que um valor negativo seja informado.
//Ao final devem ser apresentados o maior e o menor valores informados pelo usuário.
var
valor, maior, menor: inteiro
continuar, primeiro: logico
inicio
// Seção de Comandos

continuar := verdadeiro
primeiro := verdadeiro

escreva("Digite valores positivos; para encerrar, digite um número negativo.")
enquanto (continuar) faca
   leia(valor)
   se (valor < 0) entao
      continuar := falso
   senao
      se (primeiro) entao
         maior := valor
         menor := valor
         primeiro := falso
      senao
         se (valor > maior) entao
            maior := valor
         fimse
         se (valor < menor) entao
            menor := valor
         fimse
      fimse
   fimse
fimenquanto

se (primeiro) entao
   escreval("Nenhum valor positivo foi informado.")
senao
   escreval("Maior valor informado: ", maior)
   escreval("Menor valor informado: ", menor)
fimse
fimalgoritmo
