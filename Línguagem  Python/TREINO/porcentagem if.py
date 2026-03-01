 #Escreva um programa que pergunte o salário do funcionário e calcule o valor do aumento. Para salários superiores a R$ 1.250,00, calcule um aumento de 
#10%. Para os inferiores ou iguais, de 15%. 

salario= float(input("Digite o valor do seu salário :"))

if(salario > 1250):
    aumento= (salario/100)*10
    novo_salario = salario+aumento
    print (f"O seu salário com aumento passou a ser {novo_salario}")
elif(salario <= 1250):
    aumento= (salario/100)*15
    novo_salario = salario+aumento
    print (f"O seu salário com aumento passou a ser {novo_salario}")





