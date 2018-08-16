// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Pedágio
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2230

#include <bits/stdc++.h>
#define sz(x) ((int)x.size())
using namespace std;

vector<int> G[55];
int cor[55];

int main(){
	
	int t = 1;
	int c, e, l, p;
	while(cin >> c >> e >> l >> p, c){
		queue<int> fila;
		for(int i = 1; i <= c; i++) G[i].clear();
		while(e--){
			int x ,y;
			cin >> x >> y;
			G[x].push_back(y);
			G[y].push_back(x);
		}
		memset(cor, -1, sizeof(cor));
		fila.push(l);
		cor[l] = 0;
		while(!fila.empty()){
			int v = fila.front();
			fila.pop();
			for(int i = 0; i < sz(G[v]); i++){
				int r = G[v][i];
				if(cor[r] == -1){
					fila.push(r);
					cor[r] = cor[v] + 1;
				}
			}
		}
		cout << "Teste " << t << endl;
		for(int i = 1; i <= c; i++ ){
			if(cor[i] <= p && cor[i] > 0)
				cout << i << " ";
		}
		cout << endl << endl;t++;
	}
	return 0;
}
