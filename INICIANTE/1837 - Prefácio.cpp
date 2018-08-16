// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Prefácio
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1837

#include <iostream>

using namespace std;

int main()
{
    int a,b,e,f,q,r;
    cin >> a >> b;
    if(a<0)
    {
        e=b;
        if(b<0) e=b*-1;
        for(r=0; r<e; r++)
        {
            f=a-r;
            if(f%b==0) break;
        }
        q=f/b;
    }
    else
    {
        q=a/b;
        r=a%b;
    }
    cout << q << " " << r << endl;
    return 0;
}

