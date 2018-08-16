// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Máquina de Verificação Au...
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1743

#include <iostream>

using namespace std;

int main(){

    int p[5], s[5];
    bool a = false;
    for( int i = 0 ; i < 5 ; i++ )
        cin >> p[i];
    for( int i = 0 ; i < 5 ; i++ )
        cin >> s[i];
    for( int i = 0 ; i < 5 ; i++ ){
        if( p[i] == s[i] )
            a = true;
    }
    if(a)
        cout << "N" << endl;
    else
        cout << "Y" << endl;

    return 0;
}

