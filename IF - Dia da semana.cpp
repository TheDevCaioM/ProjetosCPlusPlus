#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
	int d, m, a;
    cin >> d >> m >> a;

    int g = (m <= 2) ? a - 1 : a;
    int f = (m <= 2) ? m + 13 : m + 1;

    int n = int(365.25 * g) + int(30.6 * f) - 621049 + d;

    int delta;
    
    if (n < 36523) {
        delta = 2;
    } else if (n < 73048) {
        delta = 1;
    } else {
        delta = 0;
    }

    int ds = round(fmod(n, 7)) + delta + 1;

    ds = (ds - 1) % 7 + 1;

    if (ds == 1) {
        cout << "domingo" << endl;
    } else if (ds == 2) {
        cout << "segunda-feira" << endl;
    } else if (ds == 3) {
        cout << "terca-feira" << endl;
    } else if (ds == 4) {
        cout << "quarta-feira" << endl;
    } else if (ds == 5) {
        cout << "quinta-feira" << endl;
    } else if (ds == 6) {
        cout << "sexta-feira" << endl;
    } else if (ds == 7) {
        cout << "sabado" << endl;
    }

    return 0;
}