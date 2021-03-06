// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Base 32
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1869

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	unsigned long long k, r;
	string s = "";
	while(cin >> k and k){
		while(k){
			r = k % 32; 
			k /= 32;
			((r > 9) ? s.push_back('A' + r - 10) : s.push_back('0' + r));
		}
		reverse(s.begin(), s.end());
		cout << s << '\n';
		s.clear();
	}
	cout << 0 << '\n';
	return 0;
}
