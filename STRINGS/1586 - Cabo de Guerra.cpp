// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Cabo de Guerra
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1586

#include <bits/stdc++.h>

using namespace std;

vector<pair<string, int>> v;

long long count(int m)
{
    long long p = 1, c = 0;
    for(int i = m; i >= 0; i--)
        c += p * v[i].second, p++;
    return c;
}

long long count2(int m, int n)
{
    long long p = 1, c = 0;
    for(int i = m + 1; i < n; i++)
        c += p * v[i].second, p++;
    return c;
}

int bs(int n)
{
    long long m, e = n - 1, b = 0;
    while(b <= e)
    {
        m = (b + e) / 2;
        long long c1 = count(m), c2 = count2(m, n);
        if(c1 == c2) return m;
        else if(c1 < c2) b = m + 1;
        else e = m - 1; 
    }
    return -1;
}

int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n, c;
    string a;
    while(cin >> n and n)
    {
        for(int i = 0; i < n; i++)
        {
            c = 0;
            cin >> a;
            for(int j = 0; a[j]; j++)
                c += a[j];
            v.push_back({a, c});
        }
        int k = bs(n);
        if(k == -1) cout << "Impossibilidade de empate.\n";
        else cout << v[k].first << '\n';
        v.clear();
    }

    return 0;
}
