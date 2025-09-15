#include <iostream>
using namespace std;

int main() {
    int contador_positivos = 0;
    float valor;

    for (int i = 0; i < 6; i++) {
        cin >> valor;
        if (valor > 0) {
            contador_positivos++;
        }
    }

    cout << contador_positivos << " valores positivos" << endl;

    return 0;
}