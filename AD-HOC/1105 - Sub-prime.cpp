// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Sub-prime
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1105

#include <bits/stdc++.h>

using namespace std;

int main(){

	int t, n;
	while(cin >> t >> n and t){
		int v[t+1];
		for(int i = 1; i <= t; i++)
			cin >> v[i];
		int a, b, c;
		for(int i = 1; i <= n; i++){
			cin >> a >> b >> c;
			v[a] -= c;
			v[b] += c;
		}
		bool flag = false;
		for(int i = 1; i <= t; i++){
			if(v[i] < 0)
				flag = true;
		}
		cout << (flag ? "N\n" : "S\n");
	}
	return 0;
}
