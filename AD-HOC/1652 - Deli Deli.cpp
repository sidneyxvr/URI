// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Deli Deli
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1652

#include <bits/stdc++.h>  

using namespace std; 

bool iscons(char c){
	if(isalpha(c)){
		if(c != 'a' and c != 'e' and c != 'i' 
		and c != 'o' and c != 'u')
			return true;
	}
	return false;
}

int main (){
	
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int t, n;
	map<string, string> m;
	string s1, s2;
	cin >> t >> n;
	while(t--){
		cin >> s1 >> s2;
		m[s1] = s2;
	}
	while(n--){
		cin >> s1;
		int k = s1.size();
		char p = s1[k-1];
		if(m[s1] != "")
			cout << m[s1] << '\n';
		else if(iscons(s1[k-2]) and p == 'y'){
			s1[k-1] = 'i';	 
			cout << s1 << "es\n";
		}
		else if(p == 'o' or p == 's' or p == 'x' or 
		(s1[k-2] == 'c' and p == 'h') or 
		(s1[k-2] == 's' and p == 'h'))
			cout << s1 << "es\n";
		else
			cout << s1 << "s\n";
	}
	
	return  0; 
}

