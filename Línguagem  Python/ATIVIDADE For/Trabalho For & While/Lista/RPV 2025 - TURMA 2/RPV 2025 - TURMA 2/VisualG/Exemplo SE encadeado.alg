algoritmo "semnome"
// Função :Condiçoes
// Autor : Mhell Barroca
// Data : 19/08/2025
// Seção de Declarações
var
idade:inteiro
inicio
// Seção de Comandos
Escreval("Situação eleitoral: ")
Escreva("Digite a sua idade: ")
Leia(idade)

se (idade < 16) entao
   Escreva("Não vota")
senao
   se (idade < 18) entao
      Escreva("Voto opcional")
   senao
      se(idade<70)entao
         Escreva("Voto Obrigatório")
         senao
         Escreva("Voto opcional")
      fimse
   fimse
fimse

fimalgoritmo
