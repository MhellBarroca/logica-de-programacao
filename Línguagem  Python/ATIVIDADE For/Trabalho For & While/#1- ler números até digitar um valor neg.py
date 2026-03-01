#1- ler números até digitar um valor negativo e mostrar a soma total (while)
soma = 0
numero = 0

while numero >= 0:
  numero = int(input("Digite um número: "))
  if numero >= 0:
    soma += numero

print("A soma dos números é:", soma)