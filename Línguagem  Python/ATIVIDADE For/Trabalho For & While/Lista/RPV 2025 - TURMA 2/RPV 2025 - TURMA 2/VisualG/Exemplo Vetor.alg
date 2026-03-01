algoritmo "semnome"
// Função :
// Autor :
// Data : 21/08/2025
// Seção de Declarações
var
MD :VETOR [1..8] DE REAL
SOMA,MEDIA : REAL
i : INTEIRO
inicio
// Seção de Comandos
para i de 1 ate 8 faca
   escreva ("Digite a média do aluno ", i, " :")
   leia(MD[i])
   SOMA:= SOMA+MD[i]
fimpara

MEDIA:=SOMA/(i-1)
Escreva ("Média = ", MEDIA)

fimalgoritmo
