// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Maior Número de Um Algarismo
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1867

#include <bits/stdc++.h>  

using namespace std; 

int main (){
	
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	string s1, s2;
	uint64_t p;
	while(cin >> s1 >> s2 and (s1 != "0" or s2 != "0")){
		while(s1.size() > 1){
			p = 0;
			for(int i = 0; i < s1.size(); i++)
				p += s1[i] - '0';
			s1 = to_string(p);
		}
		while(s2.size() > 1){
			p = 0;
			for(int i = 0; i < s2.size(); i++)
				p += s2[i] - '0';
			s2 = to_string(p);
		}
		cout << (s1[0] > s2[0] ? 1: (s1[0] < s2[0] ? 2: 0)) << '\n';
	}

	return  0; 
}
