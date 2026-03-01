#5) Escreva um programa que pergunte a distância que um passageiro deseja percorrer em km. Calcule o 
# preço da passagem, cobrando R$ 0,50 por km
#para viagens de até de 200 km, e R$ 0,45 para viagens mais longas. 

distancia= float(input("Qual a distância que você passageiro deseja percorrer em km:"))

if(distancia<=200):
    preco= distancia*0.50
else:
    preco= distancia *0.45

print(f"O passageiro percorreu {distancia} km e por isso o preço que ele irá pagar será R${preco:.2f}")
