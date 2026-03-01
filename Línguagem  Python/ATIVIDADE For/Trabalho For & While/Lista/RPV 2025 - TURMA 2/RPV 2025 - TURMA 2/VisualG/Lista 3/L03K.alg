algoritmo "L03K"
// Função : Calcular área total da residência, lendo cômodos até usuário digitar NAO
// Autor : Mhell Barroca Novaes
// Data : 24/08/2025
// Seção de Declarações
//Elaborar um programa que possibilite calcular a área total de uma residência (sala, cozinha,banheiro, quartos, área de serviço, quintal, garagem, etc.)
//O programa deve solicitar a entrada do nome, a largura e o comprimento de um determinado cômodo. Em seguida, deve apresentar a área do cômodo lido e
//também uma mensagem solicitando do usuário a confirmação de continuar calculando novos cômodos. Caso o usuário responda “NAO”, o programa deve
//apresentar o valor total acumulado da área residencial.
var
nome: caractere
largura, comprimento, area, total: real
resp: caractere
inicio
// Seção de Comandos
total := 0
resp := "SIM"

enquanto (resp <> "NAO") faca
   escreva("Nome do cômodo: ")
   leia(nome)
   escreva("Largura (m): ")
   leia(largura)
   escreva("Comprimento (m): ")
   leia(comprimento)

   area := largura * comprimento
   escreval("Área do(a) ", nome, " = ", area:0:2, " m^2")
   total := total + area

   escreval("Deseja continuar (SIM/NAO)? ")
   leia(resp)
fimenquanto

escreval("Área total da residência = ", total:0:2, " m^2")
fimalgoritmo
