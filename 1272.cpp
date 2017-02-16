#include <bits/stdc++.h>

using namespace std;

int main(){

	string n;
	int x, j;
	
	cin >> x;
	getchar();
	while( x-- ){
		getline( cin , n );
		j=0;
		if( n.length() == 1 )
			cout << n;
		
		for( int i = 0 ; i < n.length()-1 ; i++ ){
			if( i == 0 && isalpha( n[0] ) ){
				cout << n[j];
				j++;
			}
			if( isspace( n[i] ) && isalpha( n[i+1] ) ){
				n[j] = n[i+1];
				cout << n[j];
				j++;		
			}
		}
		cout << endl;
	}
	return 0;
} 
