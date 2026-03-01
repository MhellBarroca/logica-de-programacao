#5. Faça um programa que leia um número qualquer e mostre o seu fatorial. Exemplo: 5!= 5 * 4 * 3 * 2 * 1 = 120


numero = int(input("Digite o valor de um número :")) #5*

fatorial = 1
contador = numero

while contador > 1:
    fatorial = fatorial * contador
    contador -= 1 

print(f"{numero}!={fatorial}")

