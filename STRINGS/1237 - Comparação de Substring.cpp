// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Comparação de Substring
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1237

#include <bits/stdc++.h>

using namespace std;

int LCSubStr(string a, string b)
{
    int LCSuff[a.size() + 1][b.size() + 1];
    int result = 0;
 
    for (int i=0; i<=a.size(); i++)
    {
        for (int j=0; j<=b.size(); j++)
        {
            if (i == 0 or j == 0)
                LCSuff[i][j] = 0;
 
            else if (a[i-1] == b[j-1])
            {
                LCSuff[i][j] = LCSuff[i-1][j-1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else LCSuff[i][j] = 0;
        }
    }
    return result;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	string a, b;
	while(getline(cin, a))
	{
		getline(cin, b);
		cout << LCSubStr(a, b) << '\n';
	}
	
	return 0;
}
