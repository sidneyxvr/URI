// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Nove
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2217

#include <bits/stdc++.h>  

using namespace std; 

int main (){
	
	//ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		cout << (n & 1 ? 9: 1) << '\n';
	}
	
	return  0; 
}

