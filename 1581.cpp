#include <iostream>

using namespace std;

int main(){
	
	string n, m;
	int c, x;
	bool a;
	cin >> x;
	while(x--){
		cin >> c;
		a = false;
		for(int i=0;i<c;i++){
			cin >> n;
			if(i==0)
				m=n;
			else if( n!= m )
				a = true;	
		}
		if( a )
			cout << "ingles" << endl;
		else
			cout << n << endl;
	}
	
	return 0;
}
