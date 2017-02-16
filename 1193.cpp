#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	int n, x = 1;
	string a, b;
	cin >> n;
	while(n--){
		cin >> a >> b;
		cout << "Case " << dec << x++ << ":\n";
		if(b == "bin"){
			int d = stoi(a, nullptr, 2);
			cout << dec << d << " dec\n";
			cout << hex << d << " hex\n";
		}else if(b == "dec"){
			int d = stoi(a);
			int n = d;
			string r;
		    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
			cout << hex << d << " hex\n";
			cout << r << " bin\n";
		}else{
			int d = stoi(a, nullptr, 16);
			int n = d;
			string r;
		    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
		    cout << dec << d << " dec\n";
		    cout << r << " bin\n";
		}
		cout << '\n';
	}

	return 0;
}
