#17. Contar quantos números positivos foram digitados (encerra com número negativo).

contador = 0
numero = 0 

while numero >= 0:
    numero = int(input("Digite um número (digite negativo para sair): "))
    if numero >= 0:
        contador += 1

print(f"Você digitou {contador} números positivos.")4