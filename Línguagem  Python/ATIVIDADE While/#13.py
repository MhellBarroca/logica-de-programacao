#13. Criar um programa para que o usuário digite a senha, porém ele terá apenas 3 tentativas para acertar. (senha_correta = "python123").


senha_correta = "python123"
tentativas = 0

while tentativas < 3:
    senha = input("Digite a senha: ")

    if senha == senha_correta:
        print("Acesso liberado")
        tentativas = 3  
    else:
        print("Senha incorreta, tente novamente! ")
        tentativas += 1

# Se o usuário errou as 3 tentativas
if senha != senha_correta:
    print("Acesso bloqueado")