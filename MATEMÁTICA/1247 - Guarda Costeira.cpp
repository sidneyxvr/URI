// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Guarda Costeira
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1247

#include <bits/stdc++.h>

using namespace std;

int main()
{
	double d, vf, vg;
	while(cin >> d >> vf >> vg)
	{
		d += 0.0, vf += 0.0, vg += 0.0;
		double sg = sqrt(d*d + 144);
		if((sg / vg) <= (12 / vf))
			cout << "S\n";
		else
			cout << "N\n";
	}

	return 0;
}
