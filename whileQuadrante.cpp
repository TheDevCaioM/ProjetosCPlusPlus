#include <iostream>
using namespace std;

int main(){
    int X, Y;

    while(true){
        cin >> X >> Y;

        if(X == 0 || Y == 0){
            break;
        }

        if (X > 0 && Y > 0){
            cout << "primeiro" << endl;
        }else if (X < 0 && Y > 0){
            cout << "segundo" << endl;
        }else if (X < 0 && Y < 0){
            cout << "terceiro" << endl;
        }else if (X > 0 && Y < 0){
            cout << "quarto" << endl;
        }
    }

    return 0;
}