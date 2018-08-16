// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Tuitando
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2165

#include <iostream>

using namespace std;

int main (){

    string n;
    getline( cin , n );
    if( n.length() > 140 )
        cout << "MUTE" << endl;
    else
        cout << "TWEET" << endl;

	return 0;
}

