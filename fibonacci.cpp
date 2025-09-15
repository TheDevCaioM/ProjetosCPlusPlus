#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // L� o n�mero de termos da sequ�ncia

    // Inicializa os dois primeiros termos da sequ�ncia
    int a = 0, b = 1;

    // Imprime os N primeiros termos da sequ�ncia de Fibonacci
    for (int i = 0; i < N; i++) {
        cout << a << " "; // Imprime o termo atual
        int next = a + b; // Calcula o pr�ximo termo
        a = b; // Atualiza a para o pr�ximo termo
        b = next; // Atualiza b para o pr�ximo termo
    }

    cout << endl; // Nova linha ap�s a sa�da
    return 0;
}