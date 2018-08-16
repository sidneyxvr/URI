// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Ajude Seu Madruga
// Nível: 1
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1912

#include <bits/stdc++.h>

using namespace std;

const double EPS = 1e-4;
int v[100005];

int main()
{

	int n, a;
	while(cin >> n >> a and (n + a))
	{
		int mx = 0;
		double r = 0.0;
		for(int i = 0; i < n; i++) cin >> v[i], mx = max(mx, v[i]), r += v[i];
		double b = 0, e = mx, m;	
		if((int)r == a)
			cout << ":D\n";
		else if(r < a)
			cout << "-.-\n";
		else
		{
			for(int i = 0; i < 200; i++)
			{
				r = 0.0;
				m = (b + e) / 2;
				for(int i = 0; i < n; i++)
					r += (v[i] > m ? v[i] - m: 0);
				if(fabs(r - a) < EPS)break;
				else if(r > a) b = m;
				else e = m;
			}
			cout << fixed << setprecision(4) << m << '\n';
		}		
	}

    return 0;
}
