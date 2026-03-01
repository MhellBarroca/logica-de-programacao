#11. Tabuada de um número com while

n1 = int(input("Digite o valor de um número inteiro: "))

contador = 1

while contador <= 10:
    resultado = n1 * contador
    print(f"{n1} x {contador} = {resultado}")
    contador += 1