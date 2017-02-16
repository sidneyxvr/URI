#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int x;
	string a, b;
	
	cin >> x;
	
	while( x-- ){
		cin >> a >> b;
		if( a == b )
			cout << "empate" << endl;

		else if( a == "tesoura" && b == "papel" )
			cout << "rajesh" << endl;
		else if( a == "papel" && b == "tesoura" )
			cout << "sheldon" << endl;
		
		else if( a == "papel" && b == "pedra" )
			cout << "rajesh" << endl;
		else if( a == "pedra" && b == "papel" )
			cout << "sheldon" << endl;
		
		else if( a == "pedra" && b == "lagarto" )
			cout << "rajesh" << endl;
		else if( a == "lagarto" && b == "pedra" )
			cout << "sheldon" << endl;
		
		else if( a == "lagarto" && b == "spock" )
			cout << "rajesh" << endl;
		else if( a == "spock" && b == "lagarto" )
			cout << "sheldon" << endl;
		
		else if( a == "spock" && b == "tesoura" )
			cout << "rajesh" << endl;
		else if( a == "tesoura" && b == "spock" )
			cout << "sheldon" << endl;
			
		else if( a == "tesoura" && b == "lagarto" )
			cout << "rajesh" << endl;
		else if( a == "lagarto" && b == "tesoura" )
			cout << "sheldon" << endl;
		 
		else if( a == "lagarto" && b == "papel" )
			cout << "rajesh" << endl;
		else if( a == "papel" && b == "lagarto" )
			cout << "sheldon" << endl;
		
		else if( a == "papel" && b == "spock" )
			cout << "rajesh" << endl;
		else if( a == "spock" && b == "papel" )
			cout << "sheldon" << endl;
		
		else if( a == "spock" && b == "pedra" )
			cout << "rajesh" << endl;
		else if( a == "pedra" && b == "spock" )
			cout << "sheldon" << endl;
		
		else if( a == "pedra" && b == "tesoura" )
			cout << "rajesh" << endl;
		else if( a == "tesoura" && b == "pedra" )
			cout << "sheldon" << endl;
		
	}
			
	return 0;
} 
