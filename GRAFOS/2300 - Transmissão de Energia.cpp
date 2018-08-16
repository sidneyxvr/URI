// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Transmissão de Energia
// Nível: 5
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2300

#include <bits/stdc++.h>

using namespace std;

vector<int> G[10000];
int cor[10000];

void dfs(int v){
	cor[v] = 1;
	for(int i = 0; i < G[v].size(); i++)
		if(!cor[G[v][i]])
			dfs(G[v][i]);
}

int main(){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	int e, l, a, b, x = 1;
	bool fl;
	while(cin >> e >> l and e){
		for(int i = 0; i < e; i++){
			G[i].clear();
			cor[i] = 0;
		}
		for(int i = 0; i < l; i++){
			cin >> a >> b;
			G[a - 1].push_back(b - 1);
			G[b - 1].push_back(a - 1);
		fl = false;
		}
		dfs(0);
		for(int i = 0; i < e; i++)
			if(!cor[i])
				fl = true;
		cout << "Teste " << x++ << '\n';
		cout << (fl ? "falha": "normal") << "\n\n";
	}
	
    return 0;
} 
