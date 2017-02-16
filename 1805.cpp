#include <iostream>

using namespace std;

int main(){

    long long a, b, soma = 0;
    cin >> a >> b;
    soma=((a + b) * (b + 1 - a)) / 2;
    cout << soma << endl;

    return 0;
}
