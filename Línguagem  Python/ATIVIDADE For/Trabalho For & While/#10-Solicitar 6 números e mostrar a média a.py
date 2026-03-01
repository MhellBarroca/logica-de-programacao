#10-Solicitar 6 números e mostrar a média apenas dos números negativos
soma = 0
negativo = 0

for i in range(6):
    numero = int(input("Digite um número inteiro: "))
    if numero < 0:
        soma += numero
        negativo += 1

if negativo > 0:
    media = soma / negativo
    print("A média dos números negativos é:", media)
else:
    print("Não foram inseridos números negativos.")



