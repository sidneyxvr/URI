#include <iostream>
#include <math.h>

using namespace std;

int primo(int numero){
    if(numero % 2 == 0 && numero > 2){
        return 1;
    }
    int sq = sqrt(numero);
    for(int i = 2; i < sq; i++){
        if(numero % i == 0){
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
        if(primo(numero) == 1){
            cout << "Not Prime" << endl;
        }else{
            cout << "Prime" << endl;
        }
    }
    return 0;
}

