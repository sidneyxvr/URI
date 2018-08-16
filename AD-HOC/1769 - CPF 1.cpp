// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: CPF 1
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1769

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	string s;
	while(cin >> s){
		int c = 0, p1 = 0,  p2 = 0, j = 0, k = 10;
		for(int i = 0; i < s.size(); i++){
			if(isalnum(s[i])){ 
				c += s[i] - '0'; 
				j++; k--;
				if(j < 10) p1 += (s[i] - '0') * j;
				if(k > 0) p2 += (s[i] - '0') * k;
			}
		}
		p1 %= 11; p2 %= 11;
		if(p1 == 10) p1 = 0;
		if(p2 == 10) p2 = 0;
		if(((p1 + '0') == s[12]) and ((p2 + '0') == s[13])) 
			cout << "CPF valido\n";
		else cout << "CPF invalido\n";
	}
		
    return 0;
}
