#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double C, i, M, LUCRO;
    int t;

    cin >> C >> i >> t;

    i = i / 100;
    M = C * pow((1 + i), t);
    LUCRO = M - C;

    cout << fixed << setprecision(2) ;
	cout << "LUCRO = " << LUCRO ;
	
    return 0;
}