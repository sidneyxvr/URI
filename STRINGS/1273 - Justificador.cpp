// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Justificador
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1273

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, mx = 0, c = 0;
    bool f = false;
    string s1;
    vector<string> v;
    while(cin >> n and n)
    {
    	if(f) cout << '\n';
    	f = true;
        for(int i = 0; i < n; i++)
        {
            cin >> s1;
            v.push_back(s1);
            mx = max((int) s1.size(), mx);
        }
        for(int i = 0; i < v.size(); i++)
        {
            if(v[i].size() == mx)
            {
                cout << v[i] << '\n';
                continue;
            }
            c = mx - v[i].size();
            for(int j = 0; j < c; j++)
            {
                v[i] = " " + v[i];
            }
            c = 0;
            cout << v[i] << '\n';
        }
        v.clear();
        mx = 0;
    }
    return 0;
}
