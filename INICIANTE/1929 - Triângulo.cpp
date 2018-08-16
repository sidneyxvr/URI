// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Triângulo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1929

#include <bits/stdc++.h>

using namespace std;

int main (){

	int v[4];
	cin >> v[0] >> v[1] >> v[2] >> v[3];
	sort(v, v+4);
	if( (v[0] + v[1] > v[2]) || (v[1] + v[2] > v[3]) )
		cout << "S" << endl;
	else
		cout << "N" << endl;

	return 0;
}
