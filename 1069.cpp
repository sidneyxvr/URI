#include <iostream>

using namespace std;

int main (){

    string s;
    int q;
    cin >> q;
    while( q-- ){
        cin >> s;
        int esq = 0, dir = 0;
        for( int i = 0; i < s.length(); i++ ){
            if( s[i] == '<' )
                esq++;
            else if( s[i] == '>' && esq > dir )
                dir++;
        }
        cout << dir << endl;
    }

	return 0;
}

