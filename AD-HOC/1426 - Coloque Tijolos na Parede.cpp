// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Coloque Tijolos na Parede
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1426

#include <bits/stdc++.h>  

using namespace std; 

int m[10][10];

int calc(int i, int j){
	m[i-1][j] = (m[i-2][j-1] + m[i][j+1] - m[i][j-1])/2;
	m[i][j] = m[i-1][j] - m[i][j+1];
	m[i-1][j-1] = m[i][j-1] + m[i][j];
}

int main (){
	
	//ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	int n;
	cin >> n;
	while(n--){
		int a = 1;
		for(int i = 0; i < 9; i++)
			for(int j = 0; j < 9; j++)
				m[i][j] = -1;
		for(int i = 0; i < 9; i+=2){
			for(int j = 0; j < a; j+=2)
				cin >> m[i][j];
			a+=2;
		}
		
		a = 8;
		for(int i = 8; i > 1; i--){
			for(int j = 1; j < a; j++)
				if(m[i][j] == -1)
					calc(i, j);
			a--;
		}
		a = 1;
		for(int i = 0; i < 9; i++){
			for(int j = 0; j < a; j++){
				if(j) cout << ' ';
				cout << m[i][j];
			}
			cout << '\n';
			a++;
		}
	}
	
	
	return  0; 
}
