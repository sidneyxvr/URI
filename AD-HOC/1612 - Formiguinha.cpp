// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Formiguinha
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1612

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	int n, k;
	cin >> n;
	while(n--){
		cin >> k;
		cout << (k & 1 ? (k / 2) + 1: (k / 2)) << '\n';
	}
	
	
    return 0;
}
