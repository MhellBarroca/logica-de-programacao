#5) Escreva um algoritmo que leia 10 números do usuário e calcule a soma desses números. 

soma= 0
for i in range (1,11):
    n= int(input("Digite o valor de um número: "))
    soma += n
print(f"{soma}")