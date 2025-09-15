#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
	double nota1, nota2;
    int opcao = 1; // Inicializa a opção para entrar no loop

    while(opcao == 1){
        int contador = 0;

        while(contador < 2){
            double nota;
            cin >> nota;

            if(nota < 0 || nota > 10){
                cout << "nota invalida" << endl;
            }else{
                if (contador == 0) {
                    nota1 = nota;
                }else{
                    nota2 = nota;
                }
                contador++;
            }
        }

        double media = (nota1 + nota2) / 2;
        cout << fixed << setprecision(2) << "media = " << media << endl;

        cout << "novo calculo (1-sim 2-nao)" << endl;
        cin >> opcao;

        while (opcao < 1 || opcao > 2) {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> opcao;
        }
    }

    return 0;
}