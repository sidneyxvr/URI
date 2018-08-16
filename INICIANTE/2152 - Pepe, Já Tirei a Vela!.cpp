// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Pepe, Já Tirei a Vela!
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2152

#include <iostream>

using namespace std;

int main (){

    int h, m, o, q;
    cin >> q;
    while( q-- ){
        cin >> h >> m >> o;
        if( h < 10 )
            cout << "0" << h;
        else
            cout << h;
        cout << ":";
        if( m < 10 )
            cout << "0" << m;
        else
            cout << m;
        if( o == 1 )
            cout << " - A porta abriu!" << endl;
        else
            cout << " - A porta fechou!" << endl;
    }

	return 0;
}
