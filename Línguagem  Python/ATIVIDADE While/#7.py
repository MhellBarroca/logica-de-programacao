#7. Contar quantos números pares o usuário digita (encerra com 0)

n = int(input("Digite um número (0 para encerrar): "))
count = 0

while n != 0:
    if n % 2 == 0:
        count = count + 1
    n = int(input("Digite um número (0 para encerrar): "))

print(f"Você digitou {count} números pares.")



