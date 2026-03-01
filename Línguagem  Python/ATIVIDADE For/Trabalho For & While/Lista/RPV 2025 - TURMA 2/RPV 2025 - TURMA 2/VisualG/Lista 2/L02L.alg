algoritmo "L02L"
// Função: Saudação de acordo com o sexo
// Autor: Mhell Barroca Novaes
// Data : 24/08/2025
// Seção de Declarações
var
nome: caractere
sexo: caractere
inicio
// Seção de Comandos

escreval("Digite o nome: ")
leia(nome)
escreval("Digite o sexo (M/F): ")
leia(sexo)

se (sexo = "M") ou (sexo = "m") entao
   escreval("Ilmo Sr. ", nome)
senao
   se (sexo = "F") ou (sexo = "f") entao
      escreval("Ilma Sra. ", nome)
   senao
      escreval("Sexo informado inválido.")
   fimse
fimse
fimalgoritmo
