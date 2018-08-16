// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Andando no Tempo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2235

#include <bits/stdc++.h>

using namespace std;

int main(){

	int v[3];
	cin >> v[0] >> v[1] >> v[2];
	sort(v, v+3);
	if((v[0] == v[1]) || (v[0] == v[2]) || (v[1] == v[2]) || (v[0]+v[1] == v[2]))
		cout << 'S' << endl;
	else
		cout << 'N' << endl;	

	return 0;
}
