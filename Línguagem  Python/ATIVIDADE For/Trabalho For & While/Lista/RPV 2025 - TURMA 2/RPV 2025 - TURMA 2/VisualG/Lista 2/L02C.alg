algoritmo "L02C"
// Função: Ler 4 notas e informar se aprovado com média >= 5
// Autor: Mhell Barroca Novaes
// Data : 24/08/2025
// Seção de Declarações
//c. Ler quatro valores referentes a quatro notas escolares de um aluno e imprimir uma mensagem dizendo que o aluno foi aprovado, se o valor da
//média escolar for maior ou igual a 5. Se o aluno não foi aprovado, indicar uma mensagem informando esta condição. Apresentar junto das mensagens
//o valor da média do aluno para qualquer condição.

var
nota1, nota2, nota3, nota4: real
media: real
inicio
// Seção de Comandos

Escreva ("Digite a Nota do 1° Bimestre:")
Leia (nota1)
Escreva ("Digite a Nota do 2° Bimestre:")
Leia (nota2)
Escreva ("Digite a Nota do 3° Bimestre:")
Leia (nota3)
Escreva ("Digite a Nota do 4° Bimestre:")
Leia (nota4)

media := (nota1+nota2+nota3+nota4)/4
se (media >= 5)   entao
   escreval("O aluno foi aprovado com média ", media:4:2, ".")
senao
   escreval("O aluno não foi aprovado, pois recebeu média ", media:4:2, ".")
fimse

fimalgoritmo
