#include <bits/stdc++.h>

using namespace std;

int v, c;
int G[22][22], cor[22];
bool fl, ch;

void dfs(int a){
    cor[a] = 1;
    c+=2;
    for(int i = 0; i < v; i++){
        if(G[a][i]){
        	if(!cor[i]){
		        cout << setw(c) << ' ' << a << '-' << i << " pathR(G," << i << ")\n";
		        if(G[i][a]){
		        	cout << setw(c+3) << i << '-' << a << '\n';
		        	ch = true;
		        }
		        fl = true;
		        dfs(i);
            }else if(cor[i] and !ch)
            	cout << setw(c+1) << a << '-' << i << '\n';
        }	
	}
	c-=2;
}

int main(){

	int n, e, a, b, x = 1;
	cin >> n;
	int m[22][22];
	while(n--){
		for(int i = 0; i < 22; i++){
			cor[i] = 0;
			for(int j = 0; j < 22; j++)
				G[i][j] = 0;
		}
		cin >> v >> e;
		for(int i = 0; i < e; i++){
			cin >> a >> b;
 			G[a][b] = 1;
		}
		cout << "Caso " << x++ << ":\n";
		for(int i = 0; i < v; i++){			
			if(!cor[i]){
				c = 0;
				fl = false;
				dfs(i);
				if(fl) cout << '\n';
			}
		}
	}
        
    return 0;
}
