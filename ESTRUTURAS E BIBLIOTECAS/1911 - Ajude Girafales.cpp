// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Ajude Girafales
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1911

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	map<string, string> mp;
	int n, m;
	string a, b;
	while(cin >> n and n){
		while(n--){
			cin >> a >> b;
			mp[a] = b;
		}
		cin >> m;
		int g = 0;
		while(m--){
			cin >> a >> b;
			a = mp[a];
			int c = 0;
			for(int i = 0; i < b.size(); i++)
				if(a[i] != b[i]) c++;
			if(c > 1) g++;
		}
		cout << g << '\n';
		mp.clear();
	}
	
    return 0;
}
