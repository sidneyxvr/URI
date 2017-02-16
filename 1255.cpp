#include <iostream>
#include <cstdio>

using namespace std;

int main (){

    int v[26] = {0};
    int x;
    string n;
    cin >> x;
    getchar();
    while(x--){
        getline(cin , n);
        int m = 0;
        int t = n.length();
        for( int i = 0 ; i < t ; i++ ){
            if(isalpha(n[i]))
                v[tolower(n[i]) - 97] += 1;
        }
        for( int i = 0 ; i < 26 ; i++ ){
            if( v[i] > m )
                m = v[i];
        }
        for( int i = 0 ; i < 26 ; i++ ){
            if( v[i] == m )
                cout << char(i+97);
        }
        cout << endl;
        for( int i = 0 ; i < 26 ; i++ )
            v[i] = 0;
    }

	return 0;
}

