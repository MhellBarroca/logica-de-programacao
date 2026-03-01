#18. Criar um programa que verifique se um número é primo (com while).

numero = int(input("Digite um número inteiro : "))

divisor = 2
primo = 1  

while divisor < numero:
    if numero % divisor == 0:
        primo = 0  

    divisor += 1

if primo == 1:
    print(f"{numero} é um número primo.")
else:
    print(f"{numero} não é um número primo.")