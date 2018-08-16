// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Perguntas mais Frequentes
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1553

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n, k, a, mi, p;
	int v[1005];
	while(cin >> n >> k and n){
		mi = 0, p = 0;
		memset(v,0,sizeof(v));
		for(int i = 1; i <= n; i++){
			cin >> a;
			v[a] += 1;
			mi = max(mi, a);
		}
		int c = 0;
		for(int i = 1; i <= mi; i++){
			if(v[i] >= k){
				c++;
			}
		}
		cout << c << '\n';
	}

	return 0;
}
