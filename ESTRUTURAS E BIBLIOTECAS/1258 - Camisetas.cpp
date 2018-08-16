// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Camisetas
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1258

#include <bits/stdc++.h>

using namespace std;

bool f(pair<pair<string, string>, string> a, pair<pair<string, string>, string> b){
	return a.first.second < b.first.second or (a.first.second == b.first.second and
		   a.second > b.second) or (a.first.second == b.first.second and
		   a.second == b.second and a.first.first < b.first.first);
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int n;
	string s, c, t;
	vector<pair<pair<string, string>, string>> v;
	bool fl = false;
	while(cin >> n and n){
		if(fl) cout << '\n';
		fl = true;
		while(n--){
			cin.ignore();	
			getline(cin, s);
			cin >> c >> t;
			v.push_back({{s, c}, t});
		}
		sort(v.begin(), v.end(), f);
		for(auto p: v)
			cout << p.first.second << ' ' << p.second << ' ' << p.first.first << '\n';
		v.clear();
	}

	return 0;
}
