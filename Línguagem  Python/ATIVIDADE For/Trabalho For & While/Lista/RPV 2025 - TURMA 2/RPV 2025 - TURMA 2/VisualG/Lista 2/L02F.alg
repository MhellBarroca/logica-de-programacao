algoritmo "L02F"
// Função: Ler 3 números e exibir em ordem crescente
// Autor: Mhell Barroca Novaes
// Data : 24/08/2025
// Seção de Declarações
//f. Efetuar a leitura de três valores (variáveis A, B e C) e apresentá-los dispostos em ordem crescente.
var
A, B, C, aux: inteiro
inicio
// Seção de Comandos
escreval("Digite 3 números: ")
leia(A, B, C)

// Ordenação simples (trocas)
se A > B entao
   aux := A
   A := B
   B := aux
fimse

se A > C entao
   aux := A
   A := C
   C := aux
fimse

se B > C entao
   aux := B
   B := C
   C := aux
fimse

escreval("Ordem crescente: ", A, " - ", B, " - ", C)

fimalgoritmo
