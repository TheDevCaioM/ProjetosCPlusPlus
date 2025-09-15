#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double N1, N2;
    cin >> N1 >> N2;

    double theta = N1; // Inicializa theta com N1
    double limiteInferior = -1; // Inicializa o limite inferior
    double limiteSuperior = -1; // Inicializa o limite superior
    bool encontrou = false; // Flag para verificar se encontrou um intervalo

    while(theta <= N2){
        if(sin(theta) * cos(theta) > 0){
            if(!encontrou){
                limiteInferior = theta; // Define o limite inferior do intervalo
                encontrou = true; // Marca que encontrou um intervalo
            }
            limiteSuperior = theta; // Atualiza o limite superior do intervalo
        }else{
            if(encontrou){
                // Se já encontrou um intervalo e agora não é mais positivo
                cout << fixed << setprecision(1) << limiteInferior << " a " << limiteSuperior << endl;
                encontrou = false; // Reseta a flag
            }
        }
        theta += 0.1; // Incrementa theta
    }

    // Se o último intervalo foi positivo, imprime isso ae
    if(encontrou){
        cout << fixed << setprecision(1) << limiteInferior << " a " << limiteSuperior << endl;
    }

    return 0;
}