#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	int numeroFuncionarios, horasTrabalhadas;
    double valorPorHora, salario;

    cin >> numeroFuncionarios;
    cin >> horasTrabalhadas;
    cin >> valorPorHora;

    salario = horasTrabalhadas * valorPorHora;

    cout << "NUMBER = " << numeroFuncionarios << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salario << endl;

    return 0;
}
