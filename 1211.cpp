#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int n;
    vector<string> v;
    string a, b;
    while(cin >> n){
        for(int i = 0; i < n; i++){
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        a = *v.begin();
        int k = a.size(), c = 0;
        for(int i = 1; i < n; i++){
            b = v[i];
            for(int j = 0; j < a.size(); j++)
                if(a[j] == b[j]) c++;
                else break;
            a = b;
        }
        cout << c << '\n';
        v.clear();
    }

	return 0;
}
