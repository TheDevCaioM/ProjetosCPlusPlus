//Fa�a um programa que leia 5 valores inteiros. Conte quantos destes valores digitados s�o pares e mostre esta informa��o.
#include <iostream>
using namespace std;

int main(){
    int contador_pares = 0;
    int valor;

    for(int i = 0; i < 5; i++){
        cin >> valor;
        if (valor % 2 == 0) {
            contador_pares++;
        }
    }

    cout << contador_pares << " valores pares" << endl;

    return 0;
}