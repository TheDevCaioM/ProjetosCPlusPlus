#include <iostream>
using namespace std;
//função principal
int main() {
    //atribuir n
    int n;
    cin >> n;

    int contatos[1000]; // tamanho máximo 0 < N < 1000
    //loop for para adicionar 
    for (int i = 0; i < n; ++i) {
        cin >> contatos[i];
    }

    int menor = contatos[0];
    int maior = contatos[0];
    //loop para verificação
    for (int i = 1; i < n; ++i) {
        if (contatos[i] < menor) {
            menor = contatos[i];
        }
        if (contatos[i] > maior) {
            maior = contatos[i];
        }
    }

    cout << "Menor numero de contatos: " << menor << endl;
    cout << "Maior numero de contatos: " << maior << endl;

    return 0;
}