// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Troca de Cartas
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1104

#include <bits/stdc++.h>
#define bug(x) cerr << #x << " = " << x << '\n'

using namespace std;

int main(){

	set<int> ui, uj, uk;
	int a, b, k;
	while(cin >> a >> b and (a or b))
	{
		ui.clear();
		uj.clear();
		uk.clear();	
		vector<int> v(1);
		while(a--)
		{
			cin >> k;
			ui.insert(k);
			uk.insert(k);
		} 
		while(b--)
		{
			cin >> k;
			uj.insert(k);
			uk.insert(k);
		}
		int e = ui.size();
		if(uj.size() < ui.size()) e = uj.size();
		cout << e - (ui.size() + uj.size() - uk.size()) << '\n';
	}

	return 0;
}
