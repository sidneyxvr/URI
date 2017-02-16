#include <bits/stdc++.h>

using namespace std;

int main(){

	string n[51];
	int x, tam;
	bool b = false;	

	while( cin >> x && x != 0 ){
		tam = 0;
		if( b == true)
			cout << endl;	
		for( int i = 0 ; i < x ; i++ ){
			cin >> n[i];
			if( n[i].length() > tam )
				tam = n[i].length();
		}
		for( int i = 0 ; i < x ; i++ ){
			cout.width(tam);
			cout << n[i] << endl;
		}
		b = true;
	}
		
	return 0;
}
