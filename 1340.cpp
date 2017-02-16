#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int n, a, b;
	while(cin >> n){
		queue<int> q;
		stack<int> s;
		priority_queue<int> pq;
		bool bq, bs, bpq;
		bq = bs = bpq = true;
		while(n--){
			cin >> a >> b;
			if(a == 1){
				q.push(b);
				s.push(b);
				pq.push(b);
			}else{
				if(!q.empty()){
					if(b == q.front())
						q.pop();
					else
						bq = false;
				}
				if(!q.empty()){
					if(b == s.top())
						s.pop();
					else
						bs = false;
				}
				if(!pq.empty()){
					if(b == pq.top())
						pq.pop();
					else
						bpq = false;
				}
			}
		}
		if(bq and !bs and !bpq) cout << "queue\n";
		else if(!bq and bs and !bpq) cout << "stack\n";
		else if(!bq and !bs and bpq) cout << "priority queue\n";
		else if((bq and bs) or (bq and bpq) or (bs and bpq)) cout << "not sure\n";
		else cout << "impossible\n";
	}

	return 0;
}
