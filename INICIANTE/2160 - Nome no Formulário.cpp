// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Nome no Formulário
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2160

#include <iostream>

using namespace std;

int main (){

    string n;
    getline( cin , n );
    if( n.length() > 80 )
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

	return 0;
}

