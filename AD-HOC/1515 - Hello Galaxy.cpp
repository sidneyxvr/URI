// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Hello Galaxy
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1515

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	int n, a, t, m;
	string s, p;
	while(cin >> n and n){
		m = 1e6;
		while(n--){
			cin >> s >> a >> t;
			if(a - t < m){
				p = s;
				m = a - t;
			}
		}
		cout << p << '\n';
	}
	
	
	
    return 0;
}
