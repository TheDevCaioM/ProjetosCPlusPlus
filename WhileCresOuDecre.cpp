#include <iostream>
using namespace std;

int main(){
    int X, Y;

    while (true){
        cin >> X >> Y;

        if (X == Y) {
            break;
        }

        if (X < Y){
            cout << "Crescente" << endl;
        } else {
            cout << "Decrescente" << endl;
        }
    }

    return 0;
}