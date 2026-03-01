algoritmo "Divisao_Premiacao"
// Função : Divide uma premiação entre três ganhadores com base em percentuais
// Autor : Mhell Barroca Novaes
// Data : 19/08/2025
// Seção de Declarações
//8-Faça um programa que receba o valor da premiação de um concurso que será dividida entre três ganhadores. Sendo que da quantia total:
//O primeiro ganhador recebera 46%;
//O segundo receberá 32%;
//O terceiro recebera o restante;
//Calcule e imprima a quantia ganha por cada um dos ganhadores.

var
valor_premiacao,prim,seg,ter: REAL
inicio
// Seção de Comandos
escreva("Digite o valor da premiação: ")
leia(valor_premiacao)

prim:= valor_premiacao * 0.46
seg:= valor_premiacao * 0.32
ter:= valor_premiacao * 0.22


escreval("Primeiro ganhador recebe: R$ ", prim:6:2)
escreval("Segundo ganhador recebe: R$ ", seg:6:2)
escreval("Terceiro ganhador recebe: R$ ", ter:6:2)

fimalgoritmo
