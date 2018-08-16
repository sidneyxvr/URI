// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Feynman
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1323

#include <bits/stdc++.h>

main(){
	std::ios_base::sync_with_stdio(false); std::cin.tie(NULL);
	int n;
	while(std::cin >> n,n)
		std::cout << ((2*(n*n*n)) + (3*(n*n)) + n) / 6 << '\n';
}
