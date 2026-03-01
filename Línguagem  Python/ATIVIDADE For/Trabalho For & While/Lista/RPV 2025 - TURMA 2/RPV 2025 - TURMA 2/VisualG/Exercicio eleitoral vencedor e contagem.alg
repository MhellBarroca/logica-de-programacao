algoritmo "SISTEMA ELEIÇÃO"
// Função :
// Autor :
// Data : 21/08/2025
// Seção de Declarações
var
cand1,cand2,cand3,cand4,branco,apuracao,nulo : inteiro    //(apuração é o resultado)
candidato:caracter
inicio
// Seção de Comandos

enquanto (candidato <> "8888") faca

   Escreval("10 - Candidato 1")
   Escreval("20 - Candidato 2")
   Escreval("30 - Candidato 3")
   Escreval("40 - Candidato 4")
   Escreval("50 - Branco")
   Escreval("8888 - Apuração")

   Escreva("Escolha qual é o seu candidato [10/20/30/40/50] ou 8888 para Apuração ")
   Leia(candidato)

   escolha candidato

   caso "10"
      limpatela
      cand1 := cand1 + 1
      Escreval("Voto Registrado para Candidato 10.")

   caso "20"
      limpatela
      cand2 := cand2 + 1
      Escreval("Voto Registrado para Candidato 20.")

   caso "30"
      limpatela
      cand3 := cand3 + 1
      Escreval("Voto Registrado para Candidato 30.")

   caso "40"
      limpatela
      cand4 := cand4 + 1
      Escreval("Voto Registrado para Candidato 40.")

   caso "50"
      limpatela
      branco := branco + 1
      Escreval("Voto Registrado para Candidato Branco.")


   caso "8888"
      limpatela
      Escreval("Resultado da votação:")
      Escreval("10 - Candidato  1 = ", cand1, " votos.")
      Escreval("20 - Candidato 2 = ", cand2, " votos.")
      Escreval("30 - Candidato 3 = ", cand3, " votos.")
      Escreval("40 - Candidato 4 = ", cand4, " votos.")
      Escreval("50 - Candidato Branco = ", branco , "votos.")
      Escreval("Voto Anulado ", nulo)




   outrocaso
      nulo:=nulo+1
      Escreval("Voto Anulado")
   fimescolha

   se (cand1>cand2) e (cand1>cand3) e (cand1>cand4) e (cand1>branco) e (cand1>nulo)   entao
      escreva ("Candidato 1 é o vencedor")
   senao

      se (cand2>cand1) e (cand2>cand3) e (cand2>cand4) e (cand2>branco) e (cand1>nulo)    entao
         escreva ("Candidato 2 é o vencedor")
      senao

         se (cand3>cand1) e (cand3>cand2) e (cand3>cand4) e (cand3>branco) e (cand3>nulo)   entao
            escreva ("Candidato 3 é o vencedor")
         senao

            se (cand4>cand1) e (cand4>cand2) e (cand4>cand3) e (cand4>branco) e (cand4>nulo)   entao
               escreva ("Candidato 4 é o vencedor")

            senao

               se (branco>cand1) e (branco>cand2) e (branco>cand3) e (branco>cand4) e (branco>nulo)   entao
                  escreva ("  ")

               senao

                  se (nulo>cand1) e (nulo>cand2) e (nulo>cand3) e (nulo>cand4) e (nulo>branco)   entao
                     escreva ("  ")

                  senao








                  fimse
               fimse
            fimse
         fimse
      fimse
   fimse
fimescolha
fimenquanto
fimalgoritmo
