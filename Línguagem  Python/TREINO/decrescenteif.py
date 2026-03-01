#2) Escreva um programa que leia três números distintos e os imprima em ordem decrescente. 

n1= int(input("Digite um Número :"))
n2= int(input("Digite um Número :"))
n3= int(input("Digite um Número :"))

if(n1>n2 and n1>n3): #Se essa condição for verdadeira..
    if(n2>n3): #verifica qual é o 2° maior, se for n2
        print(n1,n2,n3)
    else: #caso o 2° naõ for o maior, o 3° será
        print(n1,n3,n2)

elif(n2>n1 and n2>n3): #Se essa condição for verdadeira..
    if(n1>n3): #verifica qual é o 2° maior deles, se for n1
        print(n2,n1,n3)
    else: #caso o 2° maior não for n1
        print(n2,n3,n1)
#N3 é o maior deles     
else:
    if(n1>n2):
        print(n3,n1,n2)
    else:
        print(n3,n2,n1)



