// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: CPF 2
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1786

#include <bits/stdc++.h>  

using namespace std; 

int main (){
	
	//ios_base::sync_with_stdio(false); cin.tie(nullptr);

	string s;
	int r1, r2, b1, b2, j;
	while(cin >> s){
		r1 = r2 = 0;
		j = 9;
		for(int i = 1; i < 10; i++){
			r1 += (s[i - 1] - '0') * i;
			r2 += (s[i - 1] - '0') * j;
			j--;
		}
		r1 %= 11;
		r2 %= 11;
		(r1 == 10) ? b1 = 0: b1 = r1;
		(r2 == 10) ? b2 = 0: b2 = r2;
		cout << s[0];
		for(int i = 1; i < 9; i++){
			if(!(i % 3)) cout << '.';
			cout << s[i];
		}
		cout << '-' << b1 << b2 << '\n';
	}
	
	return  0; 
}
