// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Huaauhahhuahau
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2242

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string s, s1, s2;
	getline(cin, s);
	for(int i = 0; i < s.length(); i++)
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') s1.push_back(s[i]);
	s2 = s1;
	reverse(s1.begin(), s1.end());
	if(s2 == s1)
		cout << 'S' << endl;
	else
		cout << 'N' << endl;
	return 0;
}
