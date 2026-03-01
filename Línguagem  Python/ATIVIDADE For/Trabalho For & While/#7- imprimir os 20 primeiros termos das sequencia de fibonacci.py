#7- imprimir os 20 primeiros termos das sequencia de fibonacci
a=0
b=1
print(a)
print(b)

for i  in range (20):
    soma=a+b
    print(soma)
    a=b
    b=soma
    

