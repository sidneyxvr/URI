// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Batalha de Pomekons
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2221

#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin >> n;
	int b, a[2], d[2], l[2], g[2];
	while(n--){
		cin >> b;
		cin >> a[0] >> d[0] >> l[0];
		cin >> a[1] >> d[1] >> l[1];
		g[0] = (a[0]+d[0])/2;
		if(l[0]%2 == 0)
			g[0] += b;
		g[1] = (a[1]+d[1])/2;
		if(l[1]%2 == 0)
			g[1] += b;
		if(g[0] > g[1])
			cout << "Dabriel" << endl;
		else if(g[0] < g[1])
			cout << "Guarte" << endl;
		else
			cout << "Empate" << endl;
	}
	
	return 0;
}
