// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Fibonacci, Quantas Chamadas?
// Nível: 2
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1029

#include <bits/stdc++.h>

using namespace std;

int c;

int f(int a){
	c += 1;
	if(!a)
		return 0;
	else if(a == 1)
		return 1;
	else
		return (f(a-1) + f(a-2));
}

int main(){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	long long n, t;
	cin >> n;
	while(n--){
		cin >> t;
		c = 0;
		int r = f(t);
		cout << "fib(" << t << ") = " << (c - 1);
		cout << " calls = " << r << '\n';
	}
	
	return 0;
}
