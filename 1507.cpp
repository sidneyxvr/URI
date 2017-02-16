#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	int n, q, p, c, j;
	string s, aux;
	cin >> n;	
	while(n--)
	{
		cin >> s >> q;
		while(q--)
		{
			cin >> aux;
			j = 0;
			for(int i = 0; i < s.size(); i++)
			{
				if(aux[j] == s[i])
					j++;
				if(j == aux.size())
					break;
			}
			cout << (j == aux.size() ? "Yes\n" : "No\n");
		}
	}
	
	return 0;
}
