// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Desenhando Labirintos
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1076

#include <bits/stdc++.h>

using namespace std;

vector<int> G[51];
int cor[51];
int c;

void DFS(int v){
	cor[v] = 1;
	for(int i = 0; i < G[v].size(); i++){
		int r = G[v][i];
		if(cor[r]==0){
			DFS(r);
			c++;
		}
	}

}

int main(){
	
	int t, n, v, a, x, y;
	cin >> t;
	while(t--){
		c = 0;
		cin >> n >> v >> a;
		for(int i = 0; i < 51; i++)
			G[i].clear();	
		for(int i = 0; i < a; i++){
			cin >> x >> y;
			G[x].push_back(y);
			G[y].push_back(x);
		}
		memset(cor, 0, sizeof(cor));
		DFS(n);
		cout << (c*2) << endl;
	}

	return 0;
}
