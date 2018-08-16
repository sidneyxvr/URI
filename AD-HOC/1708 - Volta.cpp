// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Volta
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1708

#include <bits/stdc++.h>

using namespace std;

int main (){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);	
	int m, n, mn, mx, c = 1;
	cin >> m >> n;
	mn = min(n, m);
	mx = max(n, m);
	while((mn * (c+1)) > (mx * c))
		c++;
	cout << (c+1) << '\n';
	
	return 0;
}
