// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Dígito Mais Frequente
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2138

#include <bits/stdc++.h>

using namespace std;

int main (){

    string s;
    while( cin >> s ){
        int v[10];
        memset(v,0,sizeof(v));
        for( int i = 0 ;i < s.length() ;i++ )
            v[s.at(i) - '0']++;
        int c = v[0];
        int p = 0;
        for( int i = 1; i < 10; i++ ){
            if( c <= v[i] ){
                c = v[i];
                p = i;
            }
        }
        cout << p << endl;
    }
	return 0;
}
