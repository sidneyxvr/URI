// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Fábrica de Chocolate
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1573

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int a, b, c;
	while(cin >> a >> b >> c and a)
		cout << (int)cbrt((a*b*c)) << '\n';
	
	return 0;
}
