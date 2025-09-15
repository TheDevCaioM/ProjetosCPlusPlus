#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    
    // Lê os três valores inteiros
    cin >> a >> b >> c;

    // Armazena os valores em um vetor
    int valores[3] = {a, b, c};

    // Ordena o vetor em ordem crescente
    sort(valores, valores + 3);

    // Imprime os valores em ordem crescente
    cout << valores[0] << endl;
    cout << valores[1] << endl;
    cout << valores[2] << endl;

    // Imprime uma linha em branco
    cout << endl;

    // Imprime os valores na sequência em que foram lidos
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}