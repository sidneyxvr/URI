// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Itinerário do Papai Noel
// Nível: 3
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1764

#include <bits/stdc++.h>

using namespace std;

int group[400005];

int leader(int a){
	return (group[a] == a ? a: group[a] = leader(group[a]));
}

void join(int a, int b){
	group[leader(a)] = leader(b);
}

bool same(int a, int b){
	return leader(a) == leader(b);
}

int main(){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	int n, m, a, b, c, s;
	
	vector<pair<int, pair<int, int>>> v;
	while(cin >> n >> m and n){
		s = 0;
		for(int i = 0; i < n; i++)
			group[i] = i;
		for(int i = 0; i < m; i++){
			cin >> a >> b >> c;
			v.push_back({c,{a, b}});
		}
		sort(v.begin(), v.end());
		for(int i = 0; i < m; i++){
			a = v[i].second.first;
			b = v[i].second.second;
			if(!same(a, b)){
				join(a, b);
				s += v[i].first;
			}
		}	
		cout << s << '\n';
		v.clear();
	}
	

	return 0;
}
