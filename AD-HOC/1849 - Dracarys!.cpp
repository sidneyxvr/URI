// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Dracarys!
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1849

#include <bits/stdc++.h>  

using namespace std; 

int main (){
	
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int k = min(min(a, c), b + d);
	int l = min(min(b, d), a + c);
	int m = min(min(b, c), a + d);
	int n = min(min(a, d), b + c);
	int r = max(max(k, l), max(m, n));
	cout << r * r << '\n';

	return  0; 
}
