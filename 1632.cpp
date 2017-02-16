#include <iostream>

using namespace std;

int main(){
	
	int n;
	string c;
	
	cin >> n;
	
	while(n--){
		int contador = 1;
		cin >> c;
		for( int i = 0 ; i < c.length() ; i++ ){
			if( tolower(c[i]) == 'a' || tolower(c[i]) == 'e' || tolower(c[i]) == 'i' || tolower(c[i]) == 'o' || tolower(c[i]) == 's' )
				contador *= 3;
			else
				contador *= 2;
		}
		cout << contador << endl;
	}
			
	return 0;
} 
