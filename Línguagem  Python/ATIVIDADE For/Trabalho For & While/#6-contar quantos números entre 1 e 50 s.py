#6-contar quantos números entre 1 e 50 são divisíveis por 2 ou 3 (for)

count = 0
for numero in range(1, 51):
    if numero % 2 == 0 or numero % 3 == 0:
        count += 1
print(f"A quantidade de números divisíveis por 2 ou 3 entre 1 e 50 é: {count}")


