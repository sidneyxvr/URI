#include <bits/stdc++.h>

using namespace std;

int main(){

	string s;
	bool b;
	
	while( getline( cin , s ) ){
		b = false;
		for( int i = 0 ; i < s.length() ; i++ ){
			if( isalpha(s[i]) && b == true ){
				b = false;
				s[i] = tolower(s[i]);
			}
			else if( isalpha(s[i]) && b == false ){
				b = true;
				s[i] = toupper(s[i]);
			}
		}
		cout << s << endl;
	}

	return 0;
}
