// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Mergulho
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1471

#include <iostream>

using namespace std;

int main (){

    int a,b;
    int v[10001];
    while(cin >> a >> b){
        for( int i = 0; i < a; i++ )
            v[i] = 0;
        for( int i = 0; i < b; i++ ){
            int c;
            cin >> c;
            v[c-1] = 1;
        }
        if(a!=b){
            for( int i = 0; i < a; i++ ){
                if( v[i] == 0 )
                    cout << i+1 << " ";
            }
        }else
            cout << "*";
        cout << endl;
    }

    return 0;
}

