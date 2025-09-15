#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//teste pra ver se da certo
double areaIntersecao(double d, double r, double R) {
    return (R * R * acos((d * d + R * R - r * r) / (2 * d * R))) +
           (r * r * acos((d * d + r * r - R * R) / (2 * d * r))) -
           (0.5 * sqrt((-d + r + R) * (d + r - R) * (d - r + R) * (d + r + R)));
}

int main(){
    
	double x1, y1, r1;
    double x2, y2, r2;

    cin >> x1 >> y1 >> r1;
    cin >> x2 >> y2 >> r2;

    double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (d >= r1 + r2) {
        cout << fixed << setprecision(2) << 0.00 << endl;
    } else if (d <= abs(r1 - r2)) {
        double area = M_PI * min(r1, r2) * min(r1, r2);
        cout << fixed << setprecision(2) << area << endl;
    } else {
        double r = min(r1, r2);
        double R = max(r1, r2);
        double area = areaIntersecao(d, r, R);
        cout << fixed << setprecision(2) << area << endl;
    }

    return 0;
}