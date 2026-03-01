algoritmo "L02D"
// Função: Média com exame
// Autor: Mhell Barroca Novaes
// Data : 24/08/2025
// Seção de Declarações
//d. Ler quatro valores referentes a quatro notas escolares de um aluno e imprimir uma mensagem dizendo que o
//aluno foi aprovado, se o valor da média escolar for maior ou igual a 7.
//Se o valor da média for menor que 7, solicitar a nota de exame, somar com o valor da média e obter nova média.
//Se a nova média for maior ou igual a 5, apresentar uma mensagem dizendo que o aluno foi aprovado em exame.
//Se o aluno não foi aprovado, indicar uma mensagem informando esta condição.
//Apresentar com as mensagens o valor da média do aluno, para qualquer condição.

var
n1, n2, n3, n4, exame, media, nova_media: real
inicio

// Seção de Comandos

escreval("Digite as 4 notas do aluno:")
leia(n1, n2, n3, n4)

media := (n1 + n2 + n3 + n4) / 4

se (media >= 7) entao
   escreval("Aluno aprovado direto! Média: ", media:4:2)
senao
   escreval("Aluno em exame. Digite a nota do exame: ")
   leia(exame)
   nova_media <- (media + exame) / 2
   se (nova_media >= 5) entao
      escreval("Aluno aprovado em exame! Média final: ", nova_media:4:2)
   senao
      escreval("Aluno reprovado. Média final: ", nova_media:4:2)
   fimse
fimse
fimalgoritmo
