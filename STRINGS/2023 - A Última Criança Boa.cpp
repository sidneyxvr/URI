// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: A Última Criança Boa
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2023

#include <bits/stdc++.h>

using namespace std;

bool f(string s1, string s2){
	for(int i = 0; i < s1.size(); i++)
		s1[i] = tolower(s1[i]);
	for(int i = 0; i < s2.size(); i++)
		s2[i] = tolower(s2[i]);
	return s1 > s2;
}

int main(){
	
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	vector<string> v;
	string s;
	while(getline(cin, s))
		v.push_back(s);
	sort(v.begin(), v.end(),f);
	cout << v[0] << '\n';
	
	return 0;
}


