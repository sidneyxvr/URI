// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Matriz Quadrada III
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1557

#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
	int n;
	while(cin >> n and n)
	{
		int p = to_string((int)pow(4, n - 1)).size();
		int m[16][16];
		int k = 0;
		for(int i = 0; i < n; i++)
			m[0][i] = pow(2, k), k++;
		for(int i = 1; i < n; i++)
			for(int j = 0; j < n; j++)
				m[i][j] = m[i - 1][j] * 2;
		
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(j == 0)
					cout << setw(p) << m[i][j];
				else
					cout << setw(p + 1) << m[i][j];
			}
			cout << '\n';	
		}
		cout << '\n';
	}
 
	return 0;
}
