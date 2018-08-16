// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Handebol
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1715

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	int m, n, a, c = 0;
	cin >> m >> n;	
	while(m--){
		bool fl = false;
		for(int i = 0; i < n; i++){
			cin >> a;
			if(!a) fl = true;
		}
		if(!fl) c++;
	}
	cout << c << '\n';
		
    return 0;
}
