// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Soma Natural
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1805

#include <iostream>

using namespace std;

int main(){

    long long a, b, soma=0;
    cin >> a >> b;
    soma=((a+b)*(b+1-a))/2;
    cout << soma << endl;

    return 0;
}
