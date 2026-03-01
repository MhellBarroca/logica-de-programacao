// Uma empresa está avaliando candidatos para uma vaga de gerente de loja. A seleção considera três critérios:
// 1. Formação acadêmica
// ○ Ensino médio (nível 1) → 10 pontos
// ○ Ensino superior (nível 2) → 20 pontos
// ○ Pós-graduação (nível 3) → 30 pontos
// 2. Teste de conhecimentos gerais (nota de 0 a 100)
// ○ 0 a 50 → 10 pontos
// ○ 51 a 80 → 20 pontos
// ○ acima de 80 → 30 pontos
// 3. Entrevista de liderança (nota de 0 a 100)
// ○ 0 a 60 → 0 pontos
// ○ acima de 60 → 20 pontos
// Com base na soma dos pontos, classifique o candidato:
// ● Selecionado com destaque: 70 pontos ou mais
// ● Selecionado: entre 50 e 69 pontos
// ● Não selecionado: menos de 50 pontos ou eliminado na entrevista
// Crie as seguintes funções:
// ● int pontuacaoFormacao(int nivel)
// ● int pontuacaoTeste(int nota)
// ● int pontuacaoEntrevista(int nota)
// ● void classificaCandidato(int total)
// A função principal deve apenas fazer as leituras, chamar as funções e exibir a classificação final.



#include <iostream>
using namespace std;

// Função que devolve a pontuação pela formação
int pontuacaoFormacao(int nivel) {
    if (nivel == 1) {
        return 10; // Ensino médio
    }
    else if (nivel == 2) {
        return 20; // Ensino superior
    }
    else if (nivel == 3) {
        return 30; // Pós-graduação
    }
    else {
        cout << "Nivel invalido! (1, 2 ou 3)" << endl;
        return 0;
    }
}

// Função que devolve a pontuação do teste de conhecimentos gerais
int pontuacaoTeste(int nota) {
    if (nota <= 50) {
        return 10;
    }
    else if (nota <= 80) {
        return 20;
    }
    else {
        return 30;
    }
}

// Função que devolve a pontuação da entrevista de liderança
int pontuacaoEntrevista(int nota) {
    if (nota <= 60) {
        return 0; // eliminado na entrevista
    }
    else {
        return 20;
    }
}

// Função que classifica o candidato com base na pontuação total
void classificaCandidato(int total, int pontosEntrevista) {
    cout << "\nPontuacao total: " << total << " pontos" << endl;

    if (pontosEntrevista == 0) {
        cout << "Nao selecionado (eliminado na entrevista)." << endl;
    }
    else if (total >= 70) {
        cout << "Classificacao: Selecionado com destaque!" << endl;
    }
    else if (total >= 50) {
        cout << "Classificacao: Selecionado." << endl;
    }
    else {
        cout << "Classificacao: Nao selecionado." << endl;
    }
}

int main() {
    int nivel, notaTeste, notaEntrevista;
    int pontosFormacao, pontosTeste, pontosEntrevista, total;

    cout << "Avaliacao de candidato para gerente de loja" << endl;
    cout << "--------------------------------------------" << endl;

    cout << "Informe o nivel de formacao (1 = medio, 2 = superior, 3 = pos): ";
    cin >> nivel;

    cout << "Informe a nota do teste de conhecimentos (0 a 100): ";
    cin >> notaTeste;

    cout << "Informe a nota da entrevista de lideranca (0 a 100): ";
    cin >> notaEntrevista;

    // Calcula as pontuações
    pontosFormacao = pontuacaoFormacao(nivel);
    pontosTeste = pontuacaoTeste(notaTeste);
    pontosEntrevista = pontuacaoEntrevista(notaEntrevista);

    // Soma total
    total = pontosFormacao + pontosTeste + pontosEntrevista;

    // Classifica o candidato
    classificaCandidato(total, pontosEntrevista);

    return 0;
}



