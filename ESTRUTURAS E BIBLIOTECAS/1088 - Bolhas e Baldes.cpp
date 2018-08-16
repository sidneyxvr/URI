// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Bolhas e Baldes
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1088

#include <bits/stdc++.h>

using namespace std;

const int INF = 0x3f3f3f3;
/*
int bubble(vector<int> &v)
{
	int k = 0;
	for(int i = 0; i < v.size() - 1; i++)
	{
		for(int j = i + 1; j < v.size(); j++)
		{
			if(v[i] > v[j])
				swap(v[i], v[j]), k++;
		}
	}
	return k;
}*/

int merge_sort(vector<int> &v){
	
	int inv = 0;
	if(v.size() == 1) return 0;
	vector<int> u1, u2;
	for(int i = 0; i < v.size() / 2; i++)
		u1.push_back(v[i]);
	for(int i = v.size() / 2; i < v.size(); i++)
	 	u2.push_back(v[i]);
	inv += merge_sort(u1);
	inv += merge_sort(u2);
	u1.push_back(INF);
	u2.push_back(INF);
	int ini1 = 0, ini2 = 0;
	for(int i = 0; i < v.size(); i++)
	{
		if(u1[ini1]<u2[ini2])
			v[i] = u1[ini1], ini1++;
		else
		{
			v[i] = u2[ini2];
			ini2++;
			inv += u1.size() - ini1 - 1;
		}
	}
	return inv;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int t, a;
	vector<int> v;
	while(cin >> t and t)
	{
		for(int i = 0; i < t; i++)
		{
			cin >> a;
			v.push_back(a);
		}
		//cout << (bubble(v) & 1 ? "Marcelo\n": "Carlos\n");
		cout << (merge_sort(v) & 1 ? "Marcelo\n": "Carlos\n");
		v.clear();
	}

    return 0;
}
