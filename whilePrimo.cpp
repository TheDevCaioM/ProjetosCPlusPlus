
#include <iostream>
using namespace std;

bool ehPrimo(int n){ //não sei se bool da certo, mas vamos ver
    if(n <= 1)return false; // Números menores ou iguais a 1 não são primos

    int i = 2;
    while(i * i <= n){ // Verifica até a raiz quadrada de n
        if(n % i == 0){
            return false; // Se n é divisível por i, não é primo
        }
        i++; // Incrementa i
    }
    return true; // Se não encontrou divisores, é primo
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