#Dado um valor N, digitado pelo usuário, faça um programa que preencha a lista com a quantidade de notas 
#que foi solicitado.

qtd=int(input("Digite um valor: "))
n=[]

for i in range(qtd):
    valor=float(input("Digite um valor: "))
    n.append(valor)
print(n)


