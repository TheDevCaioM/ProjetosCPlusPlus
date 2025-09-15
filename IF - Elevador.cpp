#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
	int L, C, R1, R2;
    cin >> L >> C >> R1 >> R2;

    bool cabeIndividualmente = (2 * R1 <= L && 2 * R1 <= C) && (2 * R2 <= L && 2 * R2 <= C);

    double distanciaCentros = sqrt(pow(L - R1 - R2, 2) + pow(C - R1 - R2, 2));
    bool cabeJuntos = (distanciaCentros >= R1 + R2);

    if (cabeIndividualmente && cabeJuntos) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}