// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Jogo da Memória
// Nível: 5
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1928

#include <bits/stdc++.h>  

using namespace std; 

vector<int> G[50005];
int pai[50005], nivel[50005];

void dfs(int v){
	for(int i = 0; i < G[v].size(); i++){
		int r = G[v][i];
		if(nivel[r] == -1){
			pai[r] = v;
			nivel[r] = nivel[v] + 1;
			dfs(r);
		}
	}
}

int lca(int a, int b){
	while(a != b){
		if(nivel[a] > nivel[b])
			a = pai[a];
		else
			b = pai[b];
	}
	return a;
}

int main (){
	
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	int n, a, b, s = 0;
	int v1[25005], v2[25005];
	cin >> n;
	memset(nivel, -1, n*sizeof(int));
	for(int i = 0; i < n; i++){
		cin >> a;
		if(v1[a - 1] == 0)
			v1[a - 1] = i;
		else
			v2[a - 1] = i;
	}
	for(int i = 1; i < n; i++){
		cin >> a >> b;
		G[a - 1].push_back(b - 1);
		G[b - 1].push_back(a - 1);
	}
	dfs(0);	
	for(int i = 0; i < n/2; i++){
		a = v1[i], b = v2[i];
		s += (nivel[a] + nivel[b] - 2*nivel[lca(a, b)]);
	}
	cout << s << '\n';
	
	return  0; 
}
