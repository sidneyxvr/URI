// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Espécies de Madeira
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1260

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	int n;
	map<string, double> m;
	string s;
	cin >> n;
	cin.ignore();
	char k = cin.get();
	n++;
	while(n--){
		int c = 0;
		while(getline(cin, s) and s.size()){
			m[s]++;
			c++;
		}
		cout << fixed << setprecision(4);
		for(auto p: m)
			cout << p.first << ' ' << p.second/c*100 << '\n';
		m.clear();
		if(n > 1) cout << '\n';
	}

	return 0;
}
