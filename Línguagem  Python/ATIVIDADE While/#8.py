#8. Dada uma sequência de números inteiros diferentes de zero, terminada por um zero,calcular a sua soma. 
#Por exemplo, para a sequência: 12 17 4 -6 8 0, o seu programa deve escrever o número 35.

n = int(input("Digite o valor de um número : ")) 
soma = 0  

while n != 0:
    soma = soma + n  
    n = int(input("Digite um número (0 para parar): ")) 

print(f"O total dos números digitados é: {soma}")