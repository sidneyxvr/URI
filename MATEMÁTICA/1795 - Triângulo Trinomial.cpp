// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Triângulo Trinomial
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1795

#include <iostream>

using namespace std;

int main (){

    int x;
    long long s = 1;
    cin >> x;
    for( int i = 0 ; i < x ; i++ )
        s *= 3;
    cout << s << endl;

	return 0;
}
