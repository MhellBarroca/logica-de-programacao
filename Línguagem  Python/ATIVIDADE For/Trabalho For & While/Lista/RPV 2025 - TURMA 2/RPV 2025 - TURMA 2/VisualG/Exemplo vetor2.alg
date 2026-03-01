algoritmo "semnome"
// Função :
// Autor :
// Data : 21/08/2025
// Seção de Declarações
var
nome  : vetor [1..10] de caracter
i,j :inteiro
x: caracter
inicio
// Seção de Comandos
para i de 1 ate 10 faca
   escreva("Digite nome , ", i, " :")
   leia(nome[i])
fimpara
para i de 1 ate 9 faca
   para j de i+1 ate 10 faca
      se (nome[i]>nome[j]) entao
         x:=nome[i]
         nome[i]:=nome[j]
         nome[j]:=x
      fimse
   fimpara
fimpara

para i de 1 ate 10 faca
   escreval(i, " - ",nome[i])
fimpara
fimalgoritmo
