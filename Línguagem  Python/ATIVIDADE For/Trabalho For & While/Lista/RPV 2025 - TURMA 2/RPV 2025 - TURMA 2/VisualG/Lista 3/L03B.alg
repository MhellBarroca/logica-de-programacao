algoritmo "L03B"
// Função : Somar os 100 primeiros números inteiros
// Autor : Mhell Barroca Novaes
// Data : 24/08/2025
// Seção de Declarações
//b) Apresentar o total da soma obtida dos cem primeiros números inteiros (1+2+3+4+...+98+99+100).
var
i, soma: inteiro
inicio
// Seção de Comandos
i := 1
soma := 0
enquanto (i <= 100) faca
   soma := soma + i
   i := i + 1
fimenquanto
escreval("Soma de 1 a 100 = ", soma)

fimalgoritmo
