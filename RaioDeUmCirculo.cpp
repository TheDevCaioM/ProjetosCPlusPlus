#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
	double raio;
    
	cin >> raio;

    double area = 3.14159 * raio * raio;

    cout << fixed << setprecision(3) << "AREA = " << area << endl;

    return 0;
}