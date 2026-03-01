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
enquanto (oper<>"6")faca

   Escreval("Calculadora 1.0")
   Escreval("1 - Soma")
   Escreval("2 - SUBTRAÇÃO")
   Escreval("3 - MULTIPLICAÇÃO")
   Escreval("4 - DIVISÃO")
   Escreval("5 - EXPONENCIAÇÃO")
   Escreval("6 - Sair")

   Escreva("Escolha a Operação[1/2/3/4/5 ] ou 6 para sair ")
   Leia(oper)

   se (oper<>"1") e (oper<>"2") e (oper<>"3") e (oper<>"4") e (oper<>"5") e (oper<>"6") entao
      Escreval("Operação inválida ")
      Escreva("Digite uma opção válida[1/2/3/4/5] ou 6 para saida:  ")
      Leia(oper)
   fimse

   se (oper="6")entao
      Escreva ("Opção Sair escolhida! ")
   fimalgoritmo
fimse

Escreva("Digite valor 1: ")
Leia(n1)
Escreva("Digite valor 2: ")
Leia(n2)

se(oper="1")  entao
   limpatela
   res:=n1 + n2
   Escreval (n1, " + ", n2 ," = ",res)
senao
   se(oper="2")  entao
      limpatela
      res:=n1 - n2
      Escreval (n1, " - ", n2 ," = ",res)
   senao
      se(oper="3")  entao
         limpatela
         res:=n1 * n2
         Escreval (n1, " x ", n2 ," = ",res)
      senao
         se(oper="4")  entao
            limpatela
            res:=n1 / n2
            Escreval (n1, " / ", n2 ," = ",res)
         senao
            se(oper="5")  entao
               limpatela
               res:=n1 ^ n2
               Escreval (n1, " ^ ", n2 ," = ",res)
            fimse
         fimse
      fimse
   fimse
fimse
fimenquanto
fimalgoritmo

