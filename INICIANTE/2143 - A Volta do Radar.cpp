// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: A Volta do Radar
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2143

#include <iostream>

using namespace std;

int main (){

    int q, p;
    while( cin >> q, q ){
        while( q-- ){
            cin >> p;
            if(p%2==1)
                cout << (2*p)-1 << endl;
            else
                cout << 2*(p-1) << endl;
        }
    }

	return 0;
}
