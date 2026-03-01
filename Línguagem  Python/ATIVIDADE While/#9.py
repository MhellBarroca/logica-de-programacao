    #9. Dados números inteiros n e k, com k >= 0, calcular n elevado a k. Por exemplo, dados os números 3 e 4 o seu programa deve escrever 
# o número 81.

n = int(input("Digite o número : ")) #3
k = int(input("Digite o número : ")) #4

resultado = 1
contador = 0

while contador < k: # 0<4 "sim"
    resultado = resultado * n # 1 = 1*3 
    contador = contador + 1 #(faz a repetição da conta acima)

print(f"O resultado de {n} elevado a {k} é: {resultado}")