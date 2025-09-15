#include <iostream>
#include <iomanip> // Para std::setprecision
using namespace std;

int main(){
    
	int contador_positivos = 0;
    float soma_positivos = 0.0;
    float valor;

    for(int i = 0; i < 6; i++){
        cin >> valor;
        if (valor > 0) {
            contador_positivos++;
            soma_positivos += valor;
        }
    }

    float media_positivos = soma_positivos / contador_positivos;

    cout << contador_positivos << " valores positivos" << endl;
    cout << fixed << setprecision(1) << media_positivos << endl;

    return 0;
}