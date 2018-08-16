// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Componentes Conexos
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1082

#include <bits/stdc++.h>

using namespace std;

vector<int> G[30];
bool cor[30];
string s;

void DFS(int v){
	cor[v] = true;
	s.push_back((char)(v+'a'));
	for(int i = 0; i < G[v].size(); i++) {
		int r = G[v][i];
		if(!cor[r])
			DFS(r);
	}
}

int main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n, v, e, c;
	char a, b;
	cin >> n;
	for(int j = 1; j <= n; j++){
		c = 0;
		cin >> v >> e;
		for(int i = 0; i < 30; i++)
			G[i].clear();
		for(int i = 0; i < e; i++) {
			cin >> a >> b;
			G[a-'a'].push_back(b-'a');
			G[b-'a'].push_back(a-'a');
		}
		cout << "Case #" << j << ":\n";
		memset(cor, false, sizeof(cor));
		for(int i = 0; i < v; i++) {
			s.clear();
			if(!cor[i]) {
				DFS(i);
				c++;
				sort(s.begin(), s.end());
				for(char c : s)
					cout << c << ',';
				cout << '\n';
			}
		}
		cout << c << " connected components\n\n";
	}

	return 0;
}
