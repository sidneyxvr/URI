// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Diferença Fácil Entre Datas
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2315

#include <bits/stdc++.h>  

using namespace std; 

int v[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int q(int m){
	m--;
	int s = 0;
	for(int i = 0; i < m; i++)
		s += v[i];
	return s;
}

int main (){
	
	//ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << (q(d) + c) -  (q(b) + a) << '\n';
	
	return  0; 
}
