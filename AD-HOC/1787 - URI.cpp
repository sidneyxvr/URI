// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: URI
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1787

#include <bits/stdc++.h>  

using namespace std; 

int main (){
	
	//ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int v[33], t, u, r, i, pu, pr, pi;
	for(int i = 1; i < 31; i++)
		v[i - 1] = pow(2, i);
	
	while(cin >> t and t){
		u = r = i = pu = pr = pi = 0;
		while(t--){
			cin >> u >> r >> i;
			if(binary_search(v, v+31, u)){
				pu += 1;
				if(u > r and u > i)
					pu += 1;
			}
			if(binary_search(v, v+31, r)){
				pr += 1;
				if(r > u and r > i)
					pr += 1;
			}
			if(binary_search(v, v+31, i)){
				pi += 1;
				if(i > r and i > u)
					pi += 1;
			}
		}
		if(pu > pr and pu > pi)
			cout << "Uilton\n";
		else if(pr > pu and pr > pi)
			cout << "Rita\n";
		else if(pi > pr and pi > pu)
			cout << "Ingred\n";
		else
			cout << "URI\n";
	}
	
	
	return  0; 
}
