algoritmo "Salario_Com_Gratificacao_Imposto"
// Função : Calcular o salário final com gratificação de 5% e desconto de imposto de 7%
// Autor  : Mhell Barroca Novaes
// Data : 19/08/2025
// Seção de Declarações
//9-Receba o salário-base de um funcionário. Calcule e imprima o salário a receber,
//sabendo-se que esse funcionário tem uma gratificação¸ ao de 5% sobre o salário-base. Além disso, ele paga 7% de imposto sobre o saláriobase
var
salario_base,salario_receber,gratificacao,imposto: REAL
inicio
// Seção de Comandos

escreva("Digite o salário-base: R$ ")
leia(salario_base)

gratificacao := salario_base * 0.05
imposto := salario_base * 0.07

salario_receber := salario_base + gratificacao - imposto

 escreval("O salário a receber é: R$ ", salario_receber:6:2)
fimalgoritmo
