// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Pares e Ímpares
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1259

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main (){

    priority_queue<int> impares;
    priority_queue<int , vector<int> , greater<int> > pares;

    int n,x;
    cin >> n;
    while(n--){
        cin >> x;
        if(x%2==0)
            pares.push(x);
        else
            impares.push(x);
    }
    while(!pares.empty()){
        cout << pares.top() << endl;
        pares.pop();
    }
    while(!impares.empty()){
        cout << impares.top() << endl;
        impares.pop();
    }
	return 0;
}
