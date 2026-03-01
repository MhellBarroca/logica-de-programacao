#3) Escreva um programa que pergunte a velocidade do carro de um usuário. Caso ultrapasse 80 km/h, exiba uma mensagem dizendo que o usuário foi multado.
#  Nesse caso, exiba o valor da multa, cobrando R$ 5 por km acima de 80 km/h. 


velocidade= float(input("Qual velocidade em km/h você está? :"))

if(velocidade > 80): #100
        multa = (velocidade - 80) * 5
        print(f"Você foi Multado, pois a sua velocidade utrapassou a estimativa, e o valor da multa será {multa}")
else:
    print("Você está dirigindo de acordo com a Lei.")