#• Faça a média ponderada de três notas com pesos fixos.

#nota1 = 10
#nota2 = 20
#nota3 = 30

#soma = (nota1 + nota2 + nota3)/3

#print("A média ponderaada é ", soma)

# No seu exemplo, o código que você fez está calculando a média aritmética simples (só somando e dividindo por 3). 
#Mas média ponderada leva em conta pesos para cada nota. Vou ajustar o seu exemplo:

# Notas
nota1 = 10
nota2 = 20
nota3 = 30

# Pesos
peso1 = 1
peso2 = 2
peso3 = 3

# Cálculo da média ponderada
soma = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3)

print("A média ponderada é", soma)