// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Patinhos
// Nível: 2
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2334

#include <bits/stdc++.h>

int main()
{
	unsigned long long a;
	while(std::cin >> a and a != -1)
		std::cout << (a == 0 ? 0: a - 1) << '\n';
	
	return 0;
}
