#Combinação de uma lista vazia que vai sofrendo "appends" permite ler dados  e preencher uma lista com estes dados:

notas=[]
n=int(input("Entre com o número de notas: "))
for i in range(n):
    dado = float(input("Entre com a nota" + str(i) +" : "))
    notas.append(dado)
print(notas)