#include <bits/stdc++.h>

using namespace std;

int main (){

	int caso, n, v[12], m, j=0;
	
	cin >> caso;
	
	while( caso-- ){
		cin >> n;
		for( int i = 0 ; i < n ; i++ )
			cin >> v[i];
			m = v[n/2];
		j++;
		cout << "Case " << j << ": " << m << endl;
	}
	
	return 0;
}
