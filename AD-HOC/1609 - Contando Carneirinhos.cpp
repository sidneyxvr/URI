// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Contando Carneirinhos
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1609

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	map<int, int> mp;
	int n, t, a;
	cin >> n;
	while(n--){
		cin >> t;
		while(t--){
			cin >> a;
			mp[a] = 1;
		}
		cout << mp.size() << '\n';
		mp.clear();
	}
	
    return 0;
}
