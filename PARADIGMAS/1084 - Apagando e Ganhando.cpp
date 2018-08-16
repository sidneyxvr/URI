// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Apagando e Ganhando
// Nível: 3
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1084

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, d, i;
	string str;
	while(cin >> n >> d and (n + d))
	{
		cin >> str;
		deque<char> stk;
		stk.push_front(str[0]);
		int p = (n - d);
		for(i = 1; i < str.size() and d; i++)
		{
			if(stk.front() < str[i])
			{
				while(stk.front() < str[i] and !stk.empty() and d)
					stk.pop_front(), d--;
				stk.push_front(str[i]);	
			}
			else
				stk.push_front(str[i]);
		}
		while(!stk.empty() and p--)
			cout << stk.back(), stk.pop_back();
		if(p != 0)
			for(int j = i; j < str.size(); j++) 
				cout << str[j];
		cout << '\n';
	}

	return 0;
}	
