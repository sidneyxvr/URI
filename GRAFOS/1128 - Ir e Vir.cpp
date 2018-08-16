// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Ir e Vir
// Nível: 5
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1128

#include <bits/stdc++.h>

using namespace std;

vector<int> G[2005];
int cor[2005];

void dfs(int v){
	cor[v] = 1;
	for(int i = 0; i < G[v].size(); i++)
		if(!cor[G[v][i]])
			dfs(G[v][i]);
}

int main(){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	int m, n, a, b, c;
	bool fl;
	while(cin >> n >> m and n){
		for(int i = 0; i < n; i++)
			G[i].clear();
		for(int i = 0; i < m; i++){
			cin >> a >> b >> c;
			G[a - 1].push_back(b - 1);
			if(c == 2)
				G[b - 1].push_back(a - 1);
		}
		fl = true;
		for(int i = 0; i < n and fl; i++){
			memset(cor, 0, n*sizeof(int));
			dfs(i);
			for(int j = 0; j < n and fl; j++){
				if(!cor[j])
					fl = false;
			}
		}
		cout << (fl ? 1: 0) << '\n';
	}
	
	return 0;
}
