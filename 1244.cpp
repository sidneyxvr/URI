#include <bits/stdc++.h>

using namespace std;

bool funcao( string n1, string n2 ){
    return n1.length() > n2.length();
}
vector<string> split(string str) {
    vector<string> internal;
    stringstream ss(str); // Turn the string into a stream.
    string tok;

    while(getline(ss, tok, ' '))
        internal.push_back(tok);
    return internal;
}

int main (){

    int n;
    string str;
    cin >> n;
    getchar();
    vector<string> v;
    while(n--){
        getline(cin , str);
        v = split(str);
        stable_sort(v.begin(), v.end(), funcao);
        for(int i = 0; i < v.size(); i++){
            cout << v.at(i);
            if(i < (v.size() - 1))
                cout << ' ';
        }
        cout << '\n';
    }
	return 0;
}
