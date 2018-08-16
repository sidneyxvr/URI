// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Estimando a Média
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1779

#include <bits/stdc++.h>  

using namespace std; 

int main (){
	
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int t, n, aux, x = 1, k, c, mx;
	cin >> t;
	while(t--){
		mx = c = aux = 0;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> k;
			if(k > aux){
				c = 1;
				aux = k;
				mx = 1;
			}else if(k == aux)
				c++;
			else{
				mx = max(mx, c);
				c = 0;
			}
		}
		mx = max(mx, c);
		cout << "Caso #" << x++ << ": " << mx << '\n';
	}
	
	return  0; 
}
