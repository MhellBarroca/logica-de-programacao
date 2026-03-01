algoritmo "Conversao_de_Centimetros_para_Polegadas"
// Função : Conversão de centímetros para polegadas
// Autor : Mhell Barroca Novaes
// Data : 19/08/2025
// Seção de Declarações 
//Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas. A formula de conversão é:
//P = C/ 2,54 , sendo
//C o comprimento em centímetros e
//P o comprimento em polegadas.
var
C,P:REAL
inicio
// Seção de Comandos 
Escreva("Digite o valor de comprimento em centímetros: ")
Leia (C)

P := C/ 2.54

escreval("A conversão de ", C:6:2, " centímetros para polegadas é: ", P:6:2)

fimalgoritmo
