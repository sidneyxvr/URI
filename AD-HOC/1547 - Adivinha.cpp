// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Adivinha
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1547

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	int n, qt, s, k;
	cin >> n;
	while(n--){
		cin >> qt >> s;
		int mn = 500, p;
		for(int i = 0; i < qt; i++){
			cin >> k;
			if(abs(k-s) < mn){
				mn = abs(k-s);
				p = i;
			}
		}
		cout << (p+1) << '\n';
	}

	return 0;
}
