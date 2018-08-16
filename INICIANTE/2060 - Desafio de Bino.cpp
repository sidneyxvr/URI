// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Desafio de Bino
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2060

#include <iostream>

using namespace std;

int main(){

    int n;
    int m2 = 0, m3 = 0, m4 = 0, m5 = 0;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        if( x%2 == 0 )
            m2++;
        if( x%3 == 0 )
            m3++;
        if( x%4 == 0 )
            m4++;
        if( x%5 == 0 )
            m5++;
    }
    cout << m2 << " Multiplo(s) de 2" << endl;
    cout << m3 << " Multiplo(s) de 3" << endl;
    cout << m4 << " Multiplo(s) de 4" << endl;
    cout << m5 << " Multiplo(s) de 5" << endl;

    return 0;
}
