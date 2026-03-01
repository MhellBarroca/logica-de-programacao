#10. Dados dois inteiros positivos calculam o máximo divisor comum entre eles usando o algoritmo de Euclides.

n1 = int(input("Digite o primeiro número inteiro: "))  # Ex: 10
n2 = int(input("Digite o segundo número inteiro: "))   # Ex: 5

# Enquanto o segundo número for diferente de zero
while n2 != 0:
    resto = n1 % n2        # Calcula o resto da divisão de n1 por n2
    n1 = n2                # Agora o n1 recebe o valor do n2
    n2 = resto             # E o n2 recebe o resto da divisão


print(f"O Máximo Divisor Comum é:{n1}")

