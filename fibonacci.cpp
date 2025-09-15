#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // Lê o número de termos da sequência

    // Inicializa os dois primeiros termos da sequência
    int a = 0, b = 1;

    // Imprime os N primeiros termos da sequência de Fibonacci
    for (int i = 0; i < N; i++) {
        cout << a << " "; // Imprime o termo atual
        int next = a + b; // Calcula o próximo termo
        a = b; // Atualiza a para o próximo termo
        b = next; // Atualiza b para o próximo termo
    }

    cout << endl; // Nova linha após a saída
    return 0;
}