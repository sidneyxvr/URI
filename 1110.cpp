#include <iostream>
#include <queue>

using namespace std;

int main (){

    queue<int> q;
    int x;
    while(cin >> x,x){
        for( int i = 0 ; i < x ; i++ )
            q.push(i+1);
        cout << "Discarded cards: ";
        while(q.size() >= 2){
            cout << q.front();
            if(q.size()>2)
                cout << ", ";
            q.pop();
            q.push(q.front());
            q.pop();
        }
        cout << endl << "Remaining card: " << q.front() << endl;
        q.pop();
    }


	return 0;
}

