// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: O Primo de Josephus
// Nível: 4
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1032

#include <bits/stdc++.h>
#define bug(x) cout << #x << " = " << x << '\n'

using namespace std;

bitset<33010> bs;
vector<int> p, v;

void sieve(uint64_t upperbound) {
    uint64_t _sieve_size = upperbound + 1;
    bs.set();
    bs[0] = bs[1] = 0;
    for (uint64_t i = 2; i <= _sieve_size; i++) 
    {
        if(bs[i])
        {
            for(uint64_t j = i * i; j <= _sieve_size; j += i) 
                bs[j] = 0;
            p.push_back((int)i);
        }   
    } 
}

void josephus()
{
    int k = 0, j = 0;
    while(v.size() > 1)
    {
        k = (k + p[j] - 1) % v.size();
        v.erase(v.begin() + k);
        j++;
    }
}

int main()
{ 
    sieve(33000);
    int n;
    while(cin >> n and n)
    {
        v.clear();
        for(int i = 1; i <= n; i++)
            v.push_back(i);
        josephus();
        cout << v[0] << '\n';
    }
    return 0;
}
