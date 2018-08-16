// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Blobs
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1170

#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, i;
	double c;
	
	cin >> n;
	while(n--){
		cin >> c;
		i=0;
		while(c>1){
			c=c/2;
			i++;
		}
		cout << i << " dias" << endl;
	}
	
	return 0;
}
