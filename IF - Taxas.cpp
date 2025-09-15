#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
	double salario;
    cin >> salario;
    double imposto = 0.0;

    if (salario <= 2000.00) {
        cout << "Isento" << endl;
    } else if (salario <= 3000.00) {
        imposto = (salario - 2000.00) * 0.08;
        cout << "R$ " << fixed << setprecision(2) << imposto << endl;
    } else if (salario <= 4500.00) {
        imposto = (1000.00 * 0.08) + (salario - 3000.00) * 0.18;
        cout << "R$ " << fixed << setprecision(2) << imposto << endl;
    } else {
        imposto = (1000.00 * 0.08) + (1500.00 * 0.18) + (salario - 4500.00) * 0.28;
        cout << "R$ " << fixed << setprecision(2) << imposto << endl;
    }

    return 0;
}