#1) Escreva um programa que leia três números e imprima o maior deles. 

N1= int(input("Digite um Número :"))
N2= int(input("Digite um Número :"))
N3= int(input("Digite um Número :"))

Maior=N1

if(N1>N2 and N1>N3):
    Maior=Maior
    print(f"O maior número é {Maior}")
elif(N2>N1 and N2>N3):
    Maior=N2
    print(f"O maior número é {N2}")
else:
    print(f"O maior número é {N3}")