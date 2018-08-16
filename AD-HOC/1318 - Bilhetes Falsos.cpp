// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Bilhetes Falsos
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1318

#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main (){

    map<int, int> mapa;
    int x, y, n;
    while( (cin >> x >> y),x,y ){
        int c = 0;
        getchar();
        while(y--){
            cin >> n;
            if(mapa[n] == 1)
                c++;
            mapa[n] += 1;
        }
        cout << c << endl;
        mapa.clear();
    }

	return 0;
}
