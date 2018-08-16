// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Ordenando a Lista de Cria...
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2479

#include <bits/stdc++.h>  

using namespace std; 

int main (){
	
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int n, pos = 0, neg = 0;
	vector<string> v;
	string s;
	char c;
	cin >> n;
	while(n--){
		cin >> c >> s;
		if(c == '+')
			pos++;
		else
			neg++;
		v.push_back(s);
	}
	sort(v.begin(), v.end());
	for(string str: v)
		cout << str << '\n';
	cout << "Se comportaram: " << pos << " | Nao se comportaram: " << neg << '\n';
	
	return  0; 
}
