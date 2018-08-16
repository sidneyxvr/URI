// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Mesa da Sra. Montagny!
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2131

#include <bits/stdc++.h>

using namespace std;

vector<int> G[10000];
int cor[10000];
bool fl;

void dfs(int v, int c){
	cor[v] = c;
	for(int i = 0; i < G[v].size() and !fl; i++){
		int r = G[v][i];
		if(!cor[r])
			dfs(r, (c == 1 ? 2 : 1));
		else if(cor[v] == cor[r])
			fl = true;
	}
}

int main(){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	int m, n, a, b, x = 1;
	while(cin >> n >> m){
		for(int i = 0; i < n; i++){
			G[i].clear();
			cor[i] = 0;
		}
		for(int i = 0; i < m; i++){
			cin >> a >> b;
			G[a - 1].push_back(b - 1);
			G[b - 1].push_back(a - 1);
		}
		fl = false;
		dfs(0, 1);
		cout << "Instancia " << x++ << '\n';
		cout << (fl ? "nao" : "sim") << "\n\n";
	}
	
    return 0;
} 
