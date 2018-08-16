// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Estradas Escuras
// Nível: 3
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1152

#include <bits/stdc++.h> 

using namespace std; 

int group[200005];

int leader(int a){
	return (group[a] == a ? a : group[a] = leader(group[a]));
}

void join(int a, int b){
	group[leader(a)] = leader(b);
}

bool same(int a, int b){
	return leader(a) == leader(b);
}

main (){
	
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int n, m, a, b, c, s, t;
	vector<pair<int, pair<int, int>>> v;
	while(cin >> n >> m and (n+m)){
		s = t = 0;
		for(int i = 0; i < n; i++)
			group[i] = i;
		for(int i = 0; i < m; i++){
			cin >> a >> b >> c;
			t += c;
			v.push_back({c, {a, b}});
		}
		sort(v.begin(), v.end());
		for(auto p: v){
			a = p.second.first;
			b = p.second.second;
			if(!same(a, b)){
				join(a, b);
				s += p.first;
			}
		}
		cout << (t - s) << '\n';
		v.clear();
	}
	
}
