// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Lucro
// Nível: 3
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1310

#include <bits/stdc++.h>

using namespace std;

int lucro(int *v, int n, int m){
	int mx = 0, atual = 0;
	for(int i = 0; i < n; i++){
		atual += v[i] - m;
		if(atual < 0)
			atual = 0;
		if(atual > mx)
			mx = atual;
	}
	return mx;
}

int main(){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	int t, m;
	int v[100];
	
	while(cin >> t){
		cin >> m;
		for(int i = 0; i < t; i++)
			cin >> v[i];
		int k = lucro(v, t, m);
		cout << (k > -1 ? k : 0) << '\n';
	}
		
		
	return 0;
}
