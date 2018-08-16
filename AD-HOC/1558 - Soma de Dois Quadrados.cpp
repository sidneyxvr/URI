// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Soma de Dois Quadrados
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1558

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	int k;
	while(cin >> k){
		bool flag = false;
		int sq = sqrt(k);
		for(int i = 0; i < sq+1 and !flag; i++)
			for(int j = 0; j < sq+1; j++)
				if((i*i)+(j*j) == k) flag = true;
		cout << (flag ? "YES\n" : "NO\n");
	}

	return 0;
}
