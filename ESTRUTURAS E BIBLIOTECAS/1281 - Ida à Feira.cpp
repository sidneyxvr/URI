// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Ida à Feira
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1281

#include <bits/stdc++.h>

using namespace std;

main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	map<string, double> mapa;
	int m, n, p;
	string s;
	double d, sum;
	cin >> n;
	while(n--){
		sum = 0;
		mapa.clear();
		cin >> m;
		while(m--){
			cin >> s >> d;
			mapa[s] = d;		
		}
		cin >> p;
		while(p--){
			cin >> s >> m;
			sum += mapa[s] * m;
		}
		cout << fixed << setprecision(2) << "R$ " << sum << '\n';
	}
}
