// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Getline Three -  Calçados
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1218

#include <bits/stdc++.h>

using namespace std;

int main(){

	int p, k, i, m, f, x = 1;
	char c;
	string s;
	while(cin >> p){
		cin.ignore();
		getline(cin, s);
		i = f = m = 0;
		s.push_back(' ');
		while(s.size() > 4){		
			stringstream(s) >> k >> c;
			f += (c == 'F') and (k == p);
			i += (k == p);
			s.erase(s.begin(), s.begin() + 5);
		}
		if(x > 1) cout << '\n';
		cout << "Caso " << x << ":\nPares Iguais: " << i << '\n'
			 << "F: " << f << "\nM: " << (i-f) << '\n';		
		x++;
	}
	
	return 0;
}
