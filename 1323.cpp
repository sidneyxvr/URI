#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false); std::cin.tie(NULL);
	int n;
	while(cin >> n and n)
		cout << ((2 * (n * n * n)) + (3 * (n * n)) + n) / 6 << '\n';
		
	return 0;
}
