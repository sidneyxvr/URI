#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string a, b;
	int soma, x;
	
	cin >> x;
	while( x-- ){
		cin >> a >> b;
		soma = 0;
		for( int i = 0 ; i < a.length() ; i++ ){
			if(a == b)
				break;
			soma += ((b.at(i) - '0') - (a.at(i) - '0'));
			if((b.at(i) - '0') - (a.at(i) - '0') < 0)
				soma += 26;
		}
		cout << soma << endl;
	}
		
		
	return 0;
} 
