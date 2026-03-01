#11-Ler uma sequencia de números até digitar 999, mostrar o segundo maior

soma = 0
numero = 0

while numero >= 0:
  numero = int(input("Digite um número: "))
  if numero >= 0:
    soma += numero

print("A soma dos números é:", soma)