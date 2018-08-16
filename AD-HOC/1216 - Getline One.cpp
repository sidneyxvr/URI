// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Getline One
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1216

#include <bits/stdc++.h>

using namespace std;

int main (){

	string nome;
	double n, soma = 0;
	int i = 0;
	
	while(getline(cin,nome)){
		cin >> n;
		getchar();
		soma += n;
		i++;
	}
	
	soma = soma/i;
	
	cout << fixed << setprecision(1) << soma << endl;
	
	return 0;
}
