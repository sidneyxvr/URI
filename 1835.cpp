#include <bits/stdc++.h>

using namespace std;

bool cor[105];
vector<int> G[105];

void dfs(int v){
	cor[v] = true;
	for(int i = 0; i < G[v].size(); i++){
		int r = G[v][i];
		if(!cor[r])
			dfs(r);
	}
}

int main(){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	int t, n, m, a, b, k, c = 1;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 0; i < n; i++)
			G[i].clear();
		memset(cor, 0, sizeof(cor));
		for(int i = 0; i < m; i++){
			cin >> a >> b;
			G[a-1].push_back(b-1);
			G[b-1].push_back(a-1);
		}
		k = 0;
		for(int i = 0; i < n; i++){
			if(!cor[i]){
				dfs(i);
				k++;
			}
		}
		k--;
		if(k < 1)
			cout << "Caso #" << c++ << ": a promessa foi cumprida\n";
		else
			cout << "Caso #" << c++ << ": ainda falta(m) " << k << " estrada(s)\n";
	}
	
	return 0;
}
