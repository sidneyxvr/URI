#include <bits/stdc++.h>

using namespace std;

int main(){

	string n;

	while(getline(cin, n)){
		for(int i = 0; i < n.length(); i++){
			if(n.at(i) > 64 && n.at(i) < 91){
				if(( n.at(i) - 13 ) < 65)
					n.at(i) += 13;
				else
					n.at(i) -= 13;
			}
			if(n.at(i) > 96 && n.at(i) < 123){
				if(( n.at(i) - 13 ) < 97)
					n.at(i) += 13;
				else
					n.at(i) -= 13;
			}
		}
		cout << n << endl;
	}	
	
	return 0;
} 
