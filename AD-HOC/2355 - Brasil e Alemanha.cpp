// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Brasil e Alemanha
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2355

#include <bits/stdc++.h>

using namespace std;

int main(){

	//ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int t, a, b, r;
	int jogos;
	while(cin >> t and t){
		jogos = t / 90;
		r = t % 90;
		a = jogos * 7;
		b = jogos;
		if(r > 0)
			a += (r / 13) + 1;
		cout << "Brasil " << b << " x Alemanha " << a << '\n';
	}

	return 0;
}
