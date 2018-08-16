// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Coleção de Pomekon
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2174

#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	string s;
	map<string, int> m;
	cin >> n;
	cin.ignore();
	while(n--){
		getline(cin, s);
		m[s] = 1;
	}
	cout << "Falta(m) " << 151-m.size() << " pomekon(s)." << endl;

	return 0;
}
