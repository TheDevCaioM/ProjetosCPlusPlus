#include <iostream>
using namespace std;

int main() {
    int A;
    int B;
    int C;
    int D;
    int somaCD;
    int somaAB;
    
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;
    
    somaCD = C + D;
    somaAB = A + B;
    
    if (B > C && D > A && somaCD > somaAB && C > 0 && D > 0 && A % 2 == 0) {
        cout << "Valores aceitos" << endl;
    } else {
        cout << "Valores nao aceitos" << endl;
    }

    return 0;
}