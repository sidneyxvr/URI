// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Organizador de Vagões
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1162

#include <bits/stdc++.h>

using namespace std;

int bubble(int *v, int n){
	int c = 0;
	for(int i = 0; i < n; i++){
		for(int j = n-1; j > i; j--){
			if(v[j] < v[j-1]){
				swap(v[j], v[j-1]);
				c++;
			}
		}
	}
	return c;
}

int main(){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	int n, l;
	cin >> n;
	while(n--){
		cin >> l;
		int v[l];
		for(int i = 0; i < l; i++)
			cin >> v[i];
		cout << "Optimal train swapping takes " << bubble(v, l) << " swaps.\n";
	}
               
    return 0;
}
