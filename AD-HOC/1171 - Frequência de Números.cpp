// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Frequência de Números
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1171

#include <iostream>
#include <map>

using namespace std;

int main (){

    map<int, int> m;

    int x;
    cin >> x;
    while(x--){
        int n;
        cin >> n;
        m[n] += 1;
    }
    map<int, int>::iterator it;
    for(it = m.begin() ; it != m.end() ; it++)
        cout << it->first << " aparece " << it->second << " vez(es)" << endl;

	return 0;
}
