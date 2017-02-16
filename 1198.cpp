#include <bits/stdc++.h>

using namespace std;

int main(){

	long long a, b;
	
	while(cin >> a >> b)
		if((a - b) < 0)
			cout << -1 * (a - b) << endl;
		else
			cout << (a - b) << endl;
	
	return 0;
}
