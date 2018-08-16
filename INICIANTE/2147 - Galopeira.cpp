// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Galopeira
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2147

#include <iostream>
#include <iomanip>

using namespace std;

int main (){

    string n;
    int q;
    cin >> q;
    while( q-- ){
        cin >> n;
        cout << fixed << setprecision(2) << ((double)(n.length())/100) << endl;
    }

	return 0;
}
