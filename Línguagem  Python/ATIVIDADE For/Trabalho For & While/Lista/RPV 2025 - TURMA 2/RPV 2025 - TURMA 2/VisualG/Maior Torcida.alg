algoritmo "semnome"
// Função :
// Autor :
// Data : 20/08/2025
// Seção de Declarações
var
cor,fla,pal,vas:inteiro
time: caracter
inicio
// Seção de Comandos

enquanto (time<>"5")faca

   Escreval("****Maior Torcida do Brasil****")
   Escreval("1 - Corinthians")
   Escreval("2 - Flamengo")
   Escreval("3 - Palmeiras")
   Escreval("4 - Vasco da Gama")
   Escreval("5 - Resultado")

   Escreva  ("Escolha a opção desejada [1/2/3/4/5]:")
   Leia(time)
   se (time <> "1") e  (time <> "2") e (time <> "3") e (time <> "4") e (time <> "5") entao
      escreval ("Opção Inválida")
      escreva  ("Digite uma opção válida [1/2/3/4/5]")
      leia(time)
   fimse

   escolha time
   caso "1"
      limpatela
      cor := cor + 1
      Escreval("Voto Registrado para Corinthians.")
   caso "2"
      limpatela
      fla := fla + 1
      Escreval("Voto Registrado para Flamengo.")
   caso "3"
      limpatela
      pal := pal + 1
      Escreval("Voto Registrado para Palmeiras.")
   caso "4"
      limpatela
      vas := vas + 1
      Escreval("Voto Registrado para Vasco da Gama.")
   caso "5"
      limpatela
      Escreval("Resultado da votação:")
      Escreval("1 - Corinthians = ", cor, " votos.")
      Escreval("2 - Flamengo   = ", fla, " votos.")
      Escreval("3 - Palmeiras  = ", pal, " votos.")
      Escreval("4 - Vasco      = ", vas, " votos.")


      se (cor>fla) e (cor>pal) e (cor>vas)   entao
         escreva ("Corinthians é a maior torcida do Brasil")
      senao

         se (fla>cor) e(fla>pal) e  (fla>vas)   entao
            escreva ("Flamengo é a maior torcida do brasil")
         senao

            se (pal>cor) e(pal>fla) e  (pal>vas)  entao
               escreva ("Palmeiras é a maior torcida do brasil")
            senao

               se (vas>cor) e (vas>fla) e (vas>pal)   entao
                  escreva ("Vasmo da Gama é a maior torcida do brasil")

               senao

               fimse
            fimse
         fimse
      fimse
   outrocaso
   fimescolha
fimenquanto
fimalgoritmo
