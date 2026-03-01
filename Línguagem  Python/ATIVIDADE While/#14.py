#15. Adivinhar número secreto (com dica Muito baixo/Muito alto). (Nsecreto = 42).


numero_secreto = 42
chute = int(input("Tente adivinhar o número secreto: "))

# Enquanto o chute for diferente do número secreto
while chute != numero_secreto:
    if chute < numero_secreto:
        print("Muito baixo!")
    else:
        print("Muito alto!")

    chute = int(input("Tente novamente: "))

# Quando acertar
print("Parabéns! Você acertou!")
