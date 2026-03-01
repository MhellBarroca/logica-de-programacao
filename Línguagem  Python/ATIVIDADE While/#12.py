#12. Modifique o programa anterior de forma que o usuário também digite o início e o fim da tabuada, em vez de começar com 1 e 10.


numero = int(input("Digite o número da tabuada: "))


inicio = int(input("Digite o número inicial da tabuada: "))
fim = int(input("Digite o número final da tabuada: "))

print(f"\nTabuada do {numero} de {inicio} até {fim}:")

contador = inicio
while contador <= fim:
    resultado = numero * contador
    print(f"{numero} x {contador} = {resultado}")
    contador += 1