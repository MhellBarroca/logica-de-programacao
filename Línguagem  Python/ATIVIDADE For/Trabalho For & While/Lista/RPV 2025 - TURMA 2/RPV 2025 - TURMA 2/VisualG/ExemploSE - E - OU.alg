algoritmo "semnome"
// Função :
// Autor :
// Data : 19/08/2025
// Seção de Declarações
var
fase1,fase2,fase3 :caracter
inicio
// Seção de Comandos
Escreval("Gestão de projeto: ")
Escreva("Fase 1 concluida [S/N]: ")
Leia (fase1)
Escreva("Fase 2 concluida [S/N]: ")
Leia (fase2)
Escreva("Fase 3 concluida [S/N]: ")
Leia (fase3)

se (fase1="S") e (fase2="S") e (fase3="S")   entao
   Escreva ("Projeto concluído! ")
senao
   se (fase1="S") ou  (fase2="S") ou (fase3="S") entao
      Escreva ("Projeto parcialmente concluído! ")
   senao
      Escreva ("Nenhum fase concluído! ")
   fimse
fimse
fimalgoritmo
