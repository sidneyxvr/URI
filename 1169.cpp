#include <bits/stdc++.h>

using namespace std;

int main(){

	long long soma;
	int caso, m, n;
	cin >> caso;
	while(caso--){
		cin >> n;
		soma = (pow(2,n)-1)/12000;
		cout << soma << " kg" << endl;
	}
	
	return 0;
}
