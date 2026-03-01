    #3-Leia 10 números e mostre apenas os números pares em uma nova lista.


L2=[]
L1=[]

for i in range(10):
    valor=float(input("Digite o valor de um número: "))
    L1.append(valor)
    if valor % 2 == 0:
        L2.append(valor)
print(L2)


