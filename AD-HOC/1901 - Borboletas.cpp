// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Borboletas
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1901

#include <bits/stdc++.h>  

using namespace std; 

int main (){
	
	//ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int n, a, b;
	cin >> n;
	set<int> s;
	int m[n][n];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cin >> m[i][j];
	n *= 2;
	while(n--){
		cin >> a >> b;
		s.insert(m[a - 1][b - 1]);
	}
	cout << s.size() << '\n';

	return  0; 
}

