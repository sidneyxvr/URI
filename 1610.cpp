#include <bits/stdc++.h>

using namespace std;

vector<int> G[10004];
int cor[10004];
bool ciclo;

void dfs(int v){
	cor[v] = 1;
	for(int i = 0; i < G[v].size() and !ciclo; i++){
		int r = G[v][i];
		if(cor[r] == 0) dfs(r);
		else if(cor[r] == 1) ciclo = true;
	}
	cor[v] = -1;
}

int main(){
	
	int t, n, m, a, b;
	cin >> t;
	while(t--){
		cin >> n >> m;
		ciclo = false;
		for(int i = 0; i < n; i++)
			G[i].clear();
		for(int i = 0; i < m; i++){
			cin >> a >> b;
			G[a - 1].push_back(b - 1);
		}
		memset(cor, 0, sizeof(cor));
		for(int i = 0; i < n and !ciclo; i++){
			if(!cor[i])
				dfs(i);
		}
		cout << ((ciclo) ? "SIM\n" : "NAO\n");
	}

	return 0;
}
