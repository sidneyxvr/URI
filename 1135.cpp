#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> G[1000005];
long long dist[1000005], pai[1000005], nivel[1000005];

void dfs(int v){
	for(int i = 0; i < G[v].size(); i++){
		int r = G[v][i].first;
		if(dist[r] == -1){			
			dist[r] = dist[v] + G[v][i].second;
			nivel[r] = nivel[v] + 1;
			pai[r] = v;
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

int main(){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	int n, a, l, q, s, t;
	while(cin >> n and n){
		for(int i = 0; i < n; i++)
			G[i].clear();
		memset(dist, -1, n*sizeof(long long));
		for(int i = 1; i < n; i++){
			cin >> a >> l;
			G[i].push_back({a, l});
			G[a].push_back({i, l});
		}
		dist[0] = pai[0] = nivel[0] = 0;
		cin >> q;
		dfs(0);
		for(int i = 0; i < q; i++){
			cin >> s >> t;
			if(i) cout << ' ';
			long long ll = dist[s] + dist[t] - 2*dist[lca(s, t)];
			cout << ll;
		}
		cout << '\n';
	}

    return 0;
} 
