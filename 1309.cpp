#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main(){

    string n;
    int x;
    while(cin >> n){
        cin >> x;
        cout << "$" << n[0];
        for( int i = 1 ; i < n.length() ; i++ ){
            if(n.length()%3==1){
                if((i-1)%3==0)
                    cout << ",";
            }else if(n.length()%3==2){
                if((i-2)%3==0)
                    cout << ",";
            }else{
                if(i%3==0)
                    cout << ",";
            }
            cout << n[i];
        }
        if(x<10)
            cout << ".0" << x << endl;
        else
            cout << "." << x << endl;
    }

    return 0;
}
