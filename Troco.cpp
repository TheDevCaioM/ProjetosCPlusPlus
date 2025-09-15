#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double dinheiro, preco_compra;

	cin >> dinheiro >> preco_compra;

    double troco = dinheiro - preco_compra;

	cout << fixed << setprecision(2);
	cout << "TROCO = " << troco << endl;

    return 0;
}