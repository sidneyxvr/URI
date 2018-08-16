// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Joulupukki
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2025

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string str, aux = "ulupukk";
    bool fl;
    cin >> n;
    cin.ignore();
    while(n--)
    {
        getline(cin, str);
        for(int i = 0; str[i]; i++)
        {
            fl = true;
            if(str[i] == 'o')
            {
                int k = 0;
                for(int j = i + 1; j < i + 8 and fl; j++)
                {
                    if(str[j] != aux[k])
                        fl = false;
                    k++;
                }
                if(fl)
                    str[i - 1] = 'J', str[i + 8] = 'i';
            }
        }
        cout << str << '\n';
    }

    return 0;
}
