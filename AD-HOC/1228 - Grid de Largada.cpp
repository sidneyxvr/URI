// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Grid de Largada
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1228

#include <bits/stdc++.h>  

using namespace std; 

int main (){
	
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int t, a[30], b[30];	
	while(cin >> t)
	{
		for(int i = 0; i < t; i++) cin >> a[i];
		for(int i = 0; i < t; i++) cin >> b[i];
		int k = 0;
		for(int i = 0; i < t; i++)
			for(int j = i + 1; j < t; j++)
				if(a[i] == b[j])
					while(a[i] != b[i])
						swap(b[j], b[j - 1]), j--, k++;
		cout << k << '\n';
	}
	
	return  0; 
}
