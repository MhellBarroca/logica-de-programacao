algoritmo "Fahrenheit convertido em graus Celsius"
// Função : Fahrenheit convertido em graus Celsius
// Autor :  Mhell Barroca Novaes
// Data : 19/08/2025
//Leia uma temperatura em graus Fahrenheit e apresente-a convertida em
//graus Celsius. A formula de conversão é: C=5.0*(F-32.0)/9.0, sendo C a
//temperatura em Celsius e F a temperatura em Fahrenheit
// Seção de Declarações 
var
C,F:REAL
inicio
// Seção de Comandos
escreva("Digite a temperatura em graus Fahrenheit: ")
leia(F)
C := 5.0 * (F - 32.0) / 9.0
escreva("O valor em graus Celsius é: ", C)

fimalgoritmo
