algoritmo "L03E"
// Função : Mostrar potências de 3 de expoente 0 até 15 (sem operador ^)
// Autor : Mhell Barroca Novaes
// Data : 24/08/2025
// Seção de Declarações
//e) Apresentar os resultados das potências de 3, variando do expoente 0 até o expoente 15.
//Deve ser considerado que qualquer número elevado a zero é 1, e elevado a 1 é ele próprio. Observe que neste exercício não pode ser utilizado o
// operador de exponenciação do portuguol (^).
var
expoente,potencia: inteiro
inicio
// Seção de Comandos
expoente := 0
potencia := 1
enquanto (expoente <= 15) faca
   escreval("3 ^ ", expoente, " = ", potencia)
   potencia := potencia * 3
   expoente := expoente + 1
fimenquanto
fimalgoritmo
