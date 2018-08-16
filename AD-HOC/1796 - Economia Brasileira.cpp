// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Economia Brasileira
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1796

#include <iostream>

using namespace std;

int main(){

    int n, x, c = 0, aux;
    cin >> n;
    aux = n;
    while(n--){
        cin >> x;
        if(x == 1)
            c++;
    }
    if( aux%2 == 1 )
        aux++;
    if( aux/2 > c )
        cout << "Y" << endl;
    else
        cout << "N" << endl;

    return 0;
}

