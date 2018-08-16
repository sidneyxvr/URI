// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Onde Estão Minhas Chaves
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1800

#include <bits/stdc++.h>  

using namespace std; 

int main (){
	
	//ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int t, n, a, v[1005];
	memset(v, 0, sizeof(v));
	cin >> t >> n;
	while(n--){
		cin >> a;
		v[a] = 1;
	}
	while(t--){
		cin >> a;
		if(v[a]) cout << "0\n";
		else{
			cout << "1\n";
			v[a] = 1;
		}
	}
	
	return  0; 
}
