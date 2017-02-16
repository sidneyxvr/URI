#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	string a, b;
	
	while(cin >> a)
		{
			cin >> b;
			cout << (a.find(b) == -1 ? "Nao resistente" : "Resistente") << '\n';	
		}
	
	return 0;
}
