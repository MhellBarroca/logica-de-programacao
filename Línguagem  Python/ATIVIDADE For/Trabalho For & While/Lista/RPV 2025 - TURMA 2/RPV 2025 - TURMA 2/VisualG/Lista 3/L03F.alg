algoritmo "L03F"
// Função : Calcular B^E sem operador de exponenciação
// Autor : Mhell Barroca Novaes
// Data : 24/08/2025
// Seção de Declarações
//f) Elaborar um programa que apresente como resultado o valor de uma potência de uma base qualquer elevada a um expoente qualquer, ou seja,
//de B E, em que B é o valor da base e E o valor do expoente. Observe que neste exercício não pode ser utilizado o operador de exponenciação do portuguol (^).
var
B, expoente, i: inteiro  //Não irei colocar o E como variaável, pois o VisualG não entende que é variável mas sim um operador lógico
resultado: real
inicio
// Seção de Comandos
escreva("Digite a base: ")
leia(B)
escreva("Digite o expoente (>=0): ")
leia(expoente)

resultado := 1
i := 1
enquanto (i <= expoente) faca
   resultado := resultado * B
   i := i + 1
fimenquanto
escreval(B, " ^ ", expoente, " = ", resultado)
fimalgoritmo
