// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: KiloMan
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1250

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	int n, t, v[55];
	string s;
	cin >> n;
	while(n--){
		int c = 0;
		cin >> t;
		for(int i = 0; i < t; i++)
			cin >> v[i];
		cin >> s;
		for(int i = 0; i < t; i++){
			if(s[i] == 'S' and (v[i] == 1 or v[i] == 2)) c++;
			else if(s[i] == 'J' and v[i] > 2) c++;
		}
		cout << c << endl;
	}

	return 0;
}
