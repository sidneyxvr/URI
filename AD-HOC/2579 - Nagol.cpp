// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Nagol
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2579

#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << (((b * c + d) & 1) ? "Esquerda\n": "Direita\n");
	return 0;
}
