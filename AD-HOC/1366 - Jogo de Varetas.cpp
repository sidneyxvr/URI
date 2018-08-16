// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Jogo de Varetas
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1366

#include <bits/stdc++.h>

using namespace std;

int main(){

	int t, a, b, s;
	while(cin >> t and t){
		s = 0;
		while(t--){
			cin >> a >> b;
			s += (b - (b % 2));
		}
		cout << (s / 4) << '\n';
	}
	
	return 0;
}
