#include <bits/stdc++.h>

using namespace std;

int main (){

    queue<int> q;
    priority_queue<int> p;
    int x;

    cin >> x;
    while( x-- ){
        int n, c = 0;
        cin >> n;
        while( n-- ){
            int k;
            cin >> k;
            p.push(k);
            q.push(k);
        }
        while(!p.empty()){
            if(p.top() == q.front())
                c++;
            p.pop();
            q.pop();
        }
        cout << c << endl;
    }

	return 0;
}

