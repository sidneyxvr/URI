// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Bingo!
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1136

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	int n, m, v[100], r[100];
	bool fl;
	while(cin >> n >> m and n){
		memset(r,0,sizeof(r));
		for(int i = 0; i < m; i++) cin >> v[i]; 
		for(int i = 0; i < m; i++)
			for(int j = i + 1; j < m; j++)
				r[abs(v[i] - v[j])] = 1;
				
		fl = true;
		for(int i = 1; i <= n; i++)
			if(r[i] != 1) fl = false;
		cout << (fl ? "Y\n" : "N\n");
	}

	return 0;
}
