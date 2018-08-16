// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: O Matemático
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2691

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	int x, y;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		scanf("%dx%d", &x, &y);
		for(int i = 5; i < 11; i++)
		{
			cout << x << " x " << i << " = " << x * i;
			if(x != y)
				cout << " && " << y << " x " << i << " = " << y * i;
			cout << endl;
			
		}
	}
	return 0;
}
