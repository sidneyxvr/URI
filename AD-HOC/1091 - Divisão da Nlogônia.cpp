// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Divisão da Nlogônia
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1091

#include <iostream>

using namespace std;

int main(){
	
	int caso, cx, cy, rx, ry;
	while(cin >> caso && caso != 0){
		cin >> cx >> cy;
		while(caso--){
			cin >> rx >> ry;
			if(cx == rx || cy == ry)
				cout << "divisa" << endl;
			if(rx > cx && ry > cy)
				cout << "NE" << endl;
			if(rx < cx && ry > cy)
				cout << "NO" << endl;
			if(rx < cx && ry < cy)
				cout << "SO" << endl;
			if(rx > cx && ry < cy)	
				cout << "SE" << endl;
		}
	}
	return 0;
}
