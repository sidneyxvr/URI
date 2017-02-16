#include <bits/stdc++.h>

using namespace std;

int main(){

	string n;
	int x, t ,salto, c;
	char work[26];

	for( int i = 0 ; i < 26 ; i++ ){
		work[i] = 65+i;
	}
	cin >> c;
	getchar();
	
	while( c-- ){
		cin >> n >> salto;
		for( int i = 0 ; i < n.length() ; i++ ){
			if( n[i] - 65 - salto < 0 )
				t = n[i] - 65 -	 salto + 26;
			else
				t = n[i] - 65 -	 salto;
			n[i] = work[t]; 
		}
		cout << n << endl;
	}
		
	return 0;
}
