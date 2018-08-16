// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Substituição de Tag
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1254

#include <bits/stdc++.h>

using namespace std;

int main()
{ 
    string a, b, str;
    bool fl1;
    while(getline(cin, a))
    {
        getline(cin, b);
        getline(cin, str);
        int fl = 0;
        for(int i = 0; str[i]; i++)
        {
            bool fl1 = false;
            if(str[i] == '<')
                fl++;
            else if(str[i] == '>')
                fl--;
            if(fl < 0) fl = 0;
            if((str[i] | ' ') == (a[0] | ' ') and fl > 0)
            {
                fl1 = true;
                for(int j = 0; j < a.size() and fl1; j++)
                    if((str[j + i] | ' ') != (a[j] | ' '))
                        fl1 = false;
                if(fl1)
                    cout << b, i += a.size() - 1;
            }
            if(!fl1)
                cout << str[i];
        }
        cout << '\n';
    }
    
    return 0;
} 
