
#include <iostream>
using namespace std;

bool ehPrimo(int n){ //n�o sei se bool da certo, mas vamos ver
    if(n <= 1)return false; // N�meros menores ou iguais a 1 n�o s�o primos

    int i = 2;
    while(i * i <= n){ // Verifica at� a raiz quadrada de n
        if(n % i == 0){
            return false; // Se n � divis�vel por i, n�o � primo
        }
        i++; // Incrementa i
    }
    return true; // Se n�o encontrou divisores, � primo
}

int main(){
    int N;
    cin >> N;

    if (ehPrimo(N)){
        cout << "primo" << endl;
    }else{
        cout << "nao e primo" << endl;
    }

    return 0;
}