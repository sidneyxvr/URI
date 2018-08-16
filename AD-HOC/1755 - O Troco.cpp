// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: O Troco
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1755

#include <bits/stdc++.h>  

using namespace std; 

int main (){
	
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int n, t;
	double q, mx, a;
	cin >> n;
	cout << fixed << setprecision(2);
	while(n--){
		mx = 0.0;
		cin >> q >> t;
		while(t--){
			cin >> a;
			double k = q - ((int)(q / a) * a);
			if(a < q)
				mx = max(mx, k);
		}
		cout << mx << '\n';
	}
	
	return  0; 
}
