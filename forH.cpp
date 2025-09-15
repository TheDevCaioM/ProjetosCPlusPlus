#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int N;
    cin >> N;

    double H = 0.0;

    for(int i = 1; i <= N; i++){
        H += 1.0 / i;
    }

    cout << fixed << setprecision(4) << H << endl;

    return 0;
}