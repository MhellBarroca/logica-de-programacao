#3-solicitar 8 números e mostrar quantos são maiores que 10 (while)

contador = 0
i = 0

while i < 8:
    numero = int(input(f"Digite o {i+1}º número: "))
    if numero > 10:
        contador += 1
    i += 1

print(f"Foram digitados {contador} números maiores que 10.")

    

