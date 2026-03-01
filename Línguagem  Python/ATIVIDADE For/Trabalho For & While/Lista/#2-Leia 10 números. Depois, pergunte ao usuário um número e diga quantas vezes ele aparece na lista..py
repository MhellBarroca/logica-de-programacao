# Leia 10 números. Depois, pergunte ao usuário um número e diga quantas vezes ele aparece na lista.

cont=0
n=[]

for i in range(10):
    valor=float(input("Digite o valor de um número: "))
    n.append(valor)

vezes=float(input("Digite um número: ")) 
cont= n.count(vezes)
print(f"O número {vezes} aparece {cont} vez(es) na lista.")    




