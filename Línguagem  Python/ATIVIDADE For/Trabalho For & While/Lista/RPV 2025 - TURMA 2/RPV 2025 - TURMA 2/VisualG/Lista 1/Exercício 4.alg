algoritmo "Converssão de comprimento para centimetro"
// Função : Converssão de comprimento para centimetro
// Autor :  Mhell Barroca Novaes
// Data : 19/08/2025
// Seção de Declarações 
//Leia um valor de comprimento em polegadas e apresente-o convertido em
//centímetros. A formula de conversão é:C = P * 2, 54,sendo
//C o comprimento em centímetros e
//P o comprimento em polegadas.
var
C,P:REAL
inicio
// Seção de Comandos 
Escreva("Digite o valor de comprimento em polegadas: ")
Leia (P)

C := P * 2.54

escreval("A conversão de ", P, " polegadas para centímetros é: ", C)

fimalgoritmo
