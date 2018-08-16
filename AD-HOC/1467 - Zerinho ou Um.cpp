// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Zerinho ou Um
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1467

#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    while(cin >> a >> b >> c){
        if(a!=b && a!=c)
            cout << "A" << endl;
        else if(b!=a && b!=c)
            cout << "B" << endl;
        else if(c!=a && c!=b)
            cout << "C" << endl;
        else
            cout << "*" << endl;
    }
    return 0;
}

