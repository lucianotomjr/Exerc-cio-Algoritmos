#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string nomes[5];
    double nota1[5];
    double nota2[5];
    double nota3[5];
    double media[5];
    string situacao[5];
    
    int i = 0;
    int quantidade;

    cout << "Quantos alunos deseja cadastrar? (maximo 5): ";
    cin >> quantidade;
    


    if (quantidade < 1 || quantidade > 5) {
        cout << "Quantidade invalida!" << endl;
        return 0;
    }

    while (i < quantidade) {
        cout << "\nDigite o nome do aluno " << (i+1) << ": ";
        cin >> nomes[i];
        
        cout << "Digite a primeira nota: ";
        cin >> nota1[i];
        
        cout << "Digite a segunda nota: ";
        cin >> nota2[i];
        
        cout << "Digite a terceira nota: ";
        cin >> nota3[i];

        media[i] = (nota1[i] + nota2[i] + nota3[i]) / 3;


        if (media[i] >= 7) {
            situacao[i] = "Aprovado";
        } else {
            situacao[i] = "Reprovado";
        }

        i++;
    }
    cout << "\n--- Resultado dos Alunos ---\n";
    i = 0;
    while (i < quantidade) {
        cout << "Nome: " << nomes[i] << endl;
        cout << "Nota 1: " << nota1[i] << endl;
        cout << "Nota 2: " << nota2[i] << endl;
        cout << "Nota 3: " << nota3[i] << endl;
        cout << "Media: " << media[i] << endl;
        cout << "Situacao: " << situacao[i] << endl;
        cout << "---------------------------\n";
        i++;
    }
    
    int maior = 0;
    i = 1;
    while (i < quantidade) {
        if (media[i] > media[maior]) {
            maior = i;
        }
        i++;
    }

    cout << "\nAluno com a maior media:\n";
    cout << "Nome: " << nomes[maior] << " - Media: " << media[maior] << endl;

    return 0;
}