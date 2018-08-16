// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Pouca Frequência
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1277

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int n, t;
	string a, p;
	cin >> n;
	cin.ignore();
	vector<string> al, pr;
	while(n--){
		cin >> t;
		for(int i = 0; i < t; i++){
			cin >> a;
			al.push_back(a);
		}
		for(int i = 0; i < t; i++){
			cin >> p;
			int c = 0, pa = 0;
			for(int i = 0; i < p.size(); i++){
				if(p[i] == 'P') c++;
				if(p[i] != 'M') pa++;
			}
			if(c * 4 < pa * 3)
				pr.push_back(al[i]);
		}
		bool b = false;
		for(string s: pr){ 
			if(b) cout << ' ';
			cout << s; 
			b = true;
		}
		al.clear(); pr.clear();
		cout << '\n';
	}
	
	return 0;
}
