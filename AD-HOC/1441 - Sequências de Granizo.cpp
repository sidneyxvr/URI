// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Sequências de Granizo
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1441

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	long long t, mx;
	while(cin >> t and t){
		mx = t;
		while(t != 1){			
			if(t & 1)
				t = ((3 * t) + 1);
			else
				t = (t / 2);
			mx = max(mx, t);
		}
		cout << mx << '\n';
	}
	
    return 0;
}
