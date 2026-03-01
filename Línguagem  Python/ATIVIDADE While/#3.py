#3. Faça um programa que leia o sexo de uma pessoa mas só aceite os valores "M" ou "F". Caso esteja errado, peça a digitação novamente 
# até ter um valor correto.

sexo = str(input("Digite o seu sexo: "))

while sexo != 'M' and sexo != 'F':
    sexo = input("Opção inválida. Digite novamente (F ou M): ").upper()

print(f"O sexo é {sexo}.")
