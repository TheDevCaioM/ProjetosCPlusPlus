#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	
	const double PI = 3.14159;
	double x, m, s;

    cin >> x >> m >> s;

	double f_x = (1 / sqrt(2 * PI * s * s)) * exp(-((x - m) * (x - m)) / (2 * s * s));

	cout << fixed << setprecision(4) << f_x << endl;

    return 0;
}