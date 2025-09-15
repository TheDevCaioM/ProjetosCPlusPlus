#include <iostream>
using namespace std;

// Função para calcular o comprimento do ciclo de um número n
int comprimentoCiclo(int n){
    int comprimento = 1; // Começa com 1 para contar o número inicial

    while(n != 1){
        if (n % 2 == 0) {
            n /= 2; // Se n é par, divide por 2
        }else{
            n = 3 * n + 1; // Se n é ímpar, multiplica por 3 e soma 1
        }
        comprimento++; // Incrementa o comprimento do ciclo
    }

    return comprimento;
}

int main(){
    int i, j;
    cin >> i >> j;

    // Armazena os valores originais para impressão posterior
    int original_i = i;
    int original_j = j;

    // Garante que i seja menor ou igual a j para o cálculo
    if (i > j) {
        swap(i, j);
    }

    int maxCiclo = 0;

    // Calcula o comprimento do ciclo máximo entre i e j
    for(int n = i; n <= j; n++){
        int ciclo = comprimentoCiclo(n);
        if (ciclo > maxCiclo) {
            maxCiclo = ciclo;
        }
    }

    // Imprime os valores na ordem original
    cout << original_i << " " << original_j << " " << maxCiclo << endl;

    return 0;
}