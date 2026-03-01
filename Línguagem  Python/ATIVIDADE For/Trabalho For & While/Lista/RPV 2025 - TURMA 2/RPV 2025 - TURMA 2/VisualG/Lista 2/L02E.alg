algoritmo "L02E"
// Função: Calcular raízes de uma equação do 2º grau
// Autor: Mhell Barroca Novaes
// Data : 24/08/2025
// Seção de Declarações
//e)  Efetuar a leitura de três valores (variáveis A, B e C) e efetuar o cálculo da equação completa de segundo grau, apresentando as duas raízes,
//se para os valores informados for possível efetuar o referido cálculo.
//Lembre-se de que a variável A deve ser diferente de zero.

var
A, B, C, delta, x1, x2: real
inicio
// Seção de Comandos

escreval("Digite os valores de A, B e C:")
leia(A, B, C)

se A = 0 entao
   escreval("Valor de A inválido (!!! não pode ser zero !!!).")
senao
   delta := (B*B) - 4*A*C
   se delta < 0 entao
      escreval("Não existem raízes reais.")
   senao
      x1 := (-B + raizq(delta)) / (2*A)
      x2 := (-B - raizq(delta)) / (2*A)
      escreval("Raiz 1: ", x1:4:2)
      escreval("Raiz 2: ", x2:4:2)
   fimse
fimse
fimalgoritmo
