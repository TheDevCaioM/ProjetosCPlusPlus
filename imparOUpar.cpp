#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        int X;
        cin >> X;

        if(X == 0){
            cout << "NULL" << endl;
        }else{

            string par_impar = (X % 2 == 0) ? "EVEN" : "ODD";

            string positivo_negativo = (X > 0) ? "POSITIVE" : "NEGATIVE";

            cout << par_impar << " " << positivo_negativo << endl;
        }
    }

    return 0;
}