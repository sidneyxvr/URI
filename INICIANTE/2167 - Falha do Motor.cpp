// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Falha do Motor
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2167

#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, m[105], p = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> m[i];
	for(int i = 0; i < n-1 && p == 0; i++)
		if(m[i+1] < m[i])
			p = i+2;
	cout << p << endl;
	return 0;
}
