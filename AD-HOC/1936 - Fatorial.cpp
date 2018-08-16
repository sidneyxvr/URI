// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Fatorial
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1936

#include <iostream>

using namespace std;

int fat(int n){
    int r = 1;
    for( int i = n ; i > 1 ; i-- )
        r *= i;
    return r;
}

int main(){

    int n, c = 0;
    cin >> n;
    int k = 8;
    while(n){
        while(n<fat(k))
            k--;
        c++;
        n = n-fat(k);
    }
    cout << c << endl;
    return 0;
}

