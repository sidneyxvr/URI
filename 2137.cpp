#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	vector<string> v;
	int q;
	while( cin >> q ){
		while( q-- ){
			string n;
			cin >> n;
			v.push_back(n);
			sort( v.begin() , v.end() );
		}
		for( int i = 0 ; i < v.size() ; i++ )
			cout << v.at(i) << endl;
		v.clear();
	}
	 
	
	return 0;
}
