#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	int n, t, a;
	int v[235];
	cin >> n;
	while(n--){
		cin >> t;
		memset(v,0,sizeof(v));
		for(int i = 0; i < t; i++){
			cin >> a;
			v[a]++;
		}
		bool fl = false;
		for(int i = 0; i < 231; i++){		
			while(v[i]--){ 
				if(fl) cout << ' ';
				cout << i;
				fl = true;
			}
		}
		cout << '\n';
	}
               
    return 0;
}
