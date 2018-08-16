// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Competição
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1514

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	int n, m, a, k, c, g, t, r, r2;
	bool fl, pl;
	while(cin >> n >> m and n){
		int p[m];
		k = g = t = r2 = 0;
		fl = false, pl = false;
		memset(p, 0, sizeof(p));
		for(int i = 0; i < n; i++){
			c = 0, r = 0;
			for(int j = 0; j < m; j++){
				cin >> a;
				if(a){ 
					c++;
					p[j] += 1;
					r = 1;
				}
			}
			r2 += r;
			if(c == m) fl = true;
		}
		if(r2 == n) t++;
		if(!fl) t++;
		fl = false;
		for(int i = 0; i < m; i++){
			if(p[i]) g++;
			if(p[i] == n) fl = true;
		}
		if(g == m) t++;
		if(!fl) t++;
		cout << t << '\n';
	}
	
    return 0;
}
