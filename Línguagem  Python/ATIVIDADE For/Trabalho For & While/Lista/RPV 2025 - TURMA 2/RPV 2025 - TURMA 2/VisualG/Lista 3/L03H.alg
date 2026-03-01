algoritmo "L03H"
// Função : Converter Celsius para Fahrenheit de 10 a 100 em passos de 10
// Autor : Mhell Barroca Novaes
// Data : 24/08/2025
// Seção de Declarações
//Elaborar um programa que apresente os valores de conversão de graus Celsius em Fahrenheit, de 10 em 10 graus, iniciando a contagem em 10 graus Celsius
//e finalizando em 100 graus Celsius. O programa deve apresentar os valores das duas temperaturas. A fórmula de conversão é F=90C+160/5 , sendo F a
//temperatura em Fahrenheit e C a temperatura em Celsius.
var
C: inteiro
F: real
inicio
// Seção de Comandos    ,
C := 10
enquanto (C <= 100) faca
   F := (9 * C + 160) / 5
   escreval(C, " °C  =  ", F:0:2, " °F")
   C := C + 10
fimenquanto
fimalgoritmo
