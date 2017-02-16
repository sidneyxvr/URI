#include <bits/stdc++.h>

using namespace std;

int main (){

    map<char, double> m;

    m['W'] = 1;
    m['H'] = 0.5;
    m['Q'] = 0.25;
    m['E'] = 0.125;
    m['S'] = 0.0625;
    m['T'] = 0.03125;
    m['X'] = 0.015625;

    string n;
    while(cin >> n, n[0]!='*'){
        int c = 0;
        double p = 0;
        for( int i = 0 ; i < n.length() ; i++ ){
            if(n[i]=='/'){
                if(p == 1)
                    c++;
                p = 0;
            }else
                p += m.at(n[i]);
        }
        cout << c << endl;
    }


	return 0;
}

