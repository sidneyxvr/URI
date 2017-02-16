#include <iostream>

using namespace std;

int main (){

    int x;
    long long s = 1;
    cin >> x;
    for( int i = 0 ; i < x ; i++ )
        s *= 3;
    cout << s << endl;

	return 0;
}
