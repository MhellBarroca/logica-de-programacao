algoritmo "L03D"
// Função : Mostrar os ímpares de 0 a 20
// Autor : Mhell Barroca Novaes
// Data : 24/08/2025
// Seção de Declarações
//d) Apresentar todos os valores numéricos inteiros ímpares situados na faixa de 0 a 20. Para verificar
//se o número é ímpar, efetuar dentro da malha a verificação lógica desta condição com a instrução
//se, perguntando se o número é ímpar; sendo, mostre-o; não sendo, passe para o próximo passo.
var
i: inteiro
inicio
// Seção de Comandos
i := 0
enquanto (i <= 20) faca
   se (i % 2 <> 0) entao
      escreval(i)
   fimse
   i := i + 1
fimenquanto
fimalgoritmo
