// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: As Abas de Péricles
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2061

#include <iostream>

using namespace std;

int main(){

    int n, m;
    string q;
    cin >> n >> m;
    while(m--){
        cin >> q;
        if( q == "fechou" )
            n++;
        else
            n--;
    }
    cout << n << endl;

    return 0;
}

