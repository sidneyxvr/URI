// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Descobrindo Senha
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2252

#include <bits/stdc++.h>

using namespace std;

struct senha
{
	int p;
	double o;
	bool operator < (const senha &s) const{
		return o > s.o;
	}
};

int main(){

	senha s;
	vector<senha> v;
	int q, k = 1;
	while(cin >> q){
		for(int i = 0; i < 10; i++){
			cin >> s.o;
			s.p = i;
			v.push_back(s);
		}
		sort(v.begin(), v.end());
		cout << "Caso " << k << ": ";
		for(int i = 0; i < q; i++)
			cout << v[i].p;
		cout << '\n';
		k++;
		v.clear();
	}

	return 0;
}
