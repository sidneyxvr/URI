// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Primo Rápido
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1221

#include <iostream>
#include <math.h>

using namespace std;

int primo(int numero){
    if(numero%2==0 && numero>2){
        return 1;
    }
    for(int i=2;i<sqrt(numero);i++){
        if(numero%i==0){
            return 1;
        }
    }
    return 0;
}

int main(){

    long long numero, caso;
    cin >> caso;
    while(caso--){
        cin >> numero;
        if(primo(numero)==1){
            cout << "Not Prime" << endl;
        }else{
            cout << "Prime" << endl;
        }
    }
    return 0;
}

