algoritmo "Calculadora"
// Função :
// Autor : Mhell Barroca Novaes
// Data : 19/08/2025
// Calculadora 1.0
// Seção de Declarações
//1-SOMA
//2-SUBTRAÇÃO
//3-MULTIPLICAÇÃO
//4-DIVISÃO
//5-EXPONENCIAÇÃO

var
n1,n2,res : REAL
oper:caracter
inicio
// Seção de Comandos
Escreval("Calculadora 1.0")
Escreval("1 - Soma")
Escreval("2 - SUBTRAÇÃO")
Escreval("3 - MULTIPLICAÇÃO")
Escreval("4 - DIVISÃO")
Escreval("5 - EXPONENCIAÇÃO")
Escreva("Escolha a Operação[1/2/3/4/5]: ")
Leia(oper)
se(oper<>"1") e (oper<>"2") e (oper<>"3") e (oper<>"4") e (oper<>"5") entao
   Escreva("Operação inválida ")
fimalgoritmo

Escreva("Digite valor 1: ")
Leia(n1)
Escreva("Digite valor 2: ")
Leia(n2)

se(oper="1")  entao
   res:=n1 + n2
   Escreva (n1, " + ", n2 ," = ",res)
senao
   se(oper="2")  entao
      res:=n1 - n2
      Escreva (n1, " - ", n2 ," = ",res)
   senao
      se(oper="3")  entao
         res:=n1 * n2
         Escreva (n1, " x ", n2 ," = ",res)
      senao
         se(oper="4")  entao
            res:=n1 / n2
            Escreva (n1, " / ", n2 ," = ",res)
         senao
            se(oper="5")  entao
               res:=n1 ^ n2
               Escreva (n1, " ^ ", n2 ," = ",res)
            senao
               Escreva ("Operação inválida!!!!")
            fimse
         fimse
      fimse
   fimse
fimse
fimalgoritmo

