#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int codigo, quantidade;
    double total;

    cin >> codigo >> quantidade;

    if (codigo == 1) {
        total = quantidade * 4.00;
    } else if (codigo == 2) {
        total = quantidade * 4.50;
    } else if (codigo == 3) {
        total = quantidade * 5.00;
    } else if (codigo == 4) {
        total = quantidade * 2.00;
    } else if (codigo == 5) {
        total = quantidade * 1.50;
    } else {
        total = 0.0;
    }

    cout << fixed << setprecision(2);
    cout << "Total: R$" << total << endl;

    return 0;
}