// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Jogando Cartas Fora
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1110

#include <iostream>
#include <queue>

using namespace std;

int main (){

    queue<int> q;
    int x;
    while(cin >> x,x){
        for( int i = 0 ; i < x ; i++ )
            q.push(i+1);
        cout << "Discarded cards: ";
        while(q.size() >= 2){
            cout << q.front();
            if(q.size()>2)
                cout << ", ";
            q.pop();
            q.push(q.front());
            q.pop();
        }
        cout << endl << "Remaining card: " << q.front() << endl;
        q.pop();
    }


	return 0;
}

