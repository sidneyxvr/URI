// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Crise de Energia
// Nível: 4
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1031

#include <bits/stdc++.h>  

using namespace std; 

int josephus(vector<int> v, int p)
{
	int k = 0;
	while(v.size() > 1)
	{
		v.erase(v.begin() + k);
		k = (k + p - 1) % v.size();
	}
	return v[0];
}

int main (){
	
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int t, q, i;
	vector<int> v;
	while(cin >> t and t)
	{
		i = 1, q = 0;
		while(q != 13)
		{
			v.clear();
			for(int j = 0; j < t; j++)
				v.push_back(j + 1);
			q = josephus(v, i);
			i++;
		}
		cout << i - 1 << '\n';
		
	}
	return  0; 
}
