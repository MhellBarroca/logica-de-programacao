#5-contar quantos numeros entre 1 a 100 são divisíveis por 7

cont=0
for numero in range (1,101):
    if numero % 7 ==0:
        cont+= 1

print(f"Entre 1 a 100 são divisíveis por 7, {cont} números. ")