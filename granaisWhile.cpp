#include <iostream>
using namespace std;

int main(){
    int vitoriasInter = 0, vitoriasGremio = 0, empates = 0, totalPartidas = 0;
    int golsInter, golsGremio, opcao = 1;

    while(opcao == 1){
        cin >> golsInter >> golsGremio;
        totalPartidas++;

        if(golsInter > golsGremio){
            vitoriasInter++;
        }else if(golsGremio > golsInter){
            vitoriasGremio++;
        }else{
            empates++;
        }

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> opcao;
    }

    cout << totalPartidas << " grenais" << endl;
    cout << "Inter:" << vitoriasInter << endl;
    cout << "Gremio:" << vitoriasGremio << endl;
    cout << "Empates:" << empates << endl;

    if(vitoriasInter > vitoriasGremio){
        cout << "Inter venceu mais" << endl;
    }else if(vitoriasGremio > vitoriasInter){
        cout << "Gremio venceu mais" << endl;
    }else{
        cout << "Nao houve vencedor" << endl;
    }

    return 0;
}