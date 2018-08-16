// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Instruções do Robô
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1574

#include <bits/stdc++.h>

using namespace std;

int main(){

	int t, n;
	string s;
	char c[105];
	cin >> t;
	while(t--){
		int x = 0;
		cin >> n;
		cin.ignore();
		for(int i = 1; i <= n; i++){
			getline(cin, s);
			if(s[0] == 'L'){
				c[i] = 'L';
			}else if(s[0] == 'R'){
				c[i] = 'R';
			}else{
				string aux;
				aux.push_back(s[8]);
				if(s.size() > 8)
					aux.push_back(s[9]);
				int k = stoi(aux);
				c[i] = c[k];
			}
		}
		for(int i = 1; i <= n; i++){
			if(c[i] == 'R')
				x++;
			else
				x--;
		}
		cout << x << '\n';
	}
	
	return 0;
}
