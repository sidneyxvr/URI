// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Fila do Recreio
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1548

#include <iostream>
#include <queue>

using namespace std;

int main (){

    queue<int> q;
    priority_queue<int> p;
    int x;

    cin >> x;
    while( x-- ){
        int n, c = 0;
        cin >> n;
        while( n-- ){
            int k;
            cin >> k;
            p.push(k);
            q.push(k);
        }
        while(!p.empty()){
            if(p.top() == q.front())
                c++;
            p.pop();
            q.pop();
        }
        cout << c << endl;
    }

	return 0;
}

