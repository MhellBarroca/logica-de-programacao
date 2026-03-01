#6. Imprima números pares e ímpares entre 1 e o número inserido. Lista de exercícios.

num = int(input("Digite um número: "))
count = 1

while count <= num:
    if count % 2 == 0:
        print(f"{count} é PAR")
    else:
        print(f"{count} é ÍMPAR")
    count = count + 1