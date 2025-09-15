#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double A;
	double B;
	double C;
	
    cin >> A >> B >> C;

    double areaTriangulo = (A * C) / 2;
    double areaCirculo = 3.14159 * C * C;
    double areaTrapezio = ((A + B) * C) / 2;
    double areaQuadrado = B * B;
    double areaRetangulo = A * B;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << areaTriangulo << endl;
    cout << "CIRCULO: " << areaCirculo << endl;
    cout << "TRAPEZIO: " << areaTrapezio << endl;
    cout << "QUADRADO: " << areaQuadrado << endl;
    cout << "RETANGULO: " << areaRetangulo << endl;

    return 0;
}
