// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Esquerda, Volver!
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1437

#include <iostream>
#include <cstdio>

using namespace std;

int main (){

    string n;
    int x, d;
    while(cin >> x,x){
        getchar();
        cin >> n;
        d = 0;
        for( int i = 0 ; i < n.length() ; i++ ){
            if( n[i] == 'D')
                d++;
            else
                d--;
        }
        while( d<0 )
            d+=4;
        while( d>3 )
            d-=4;
        if( d == 0 )
            cout << "N" << endl;
        else if( d == 1 )
            cout << "L" << endl;
        else if( d == 2 )
            cout << "S" << endl;
        else
            cout << "O" << endl;
    }

	return 0;
}

