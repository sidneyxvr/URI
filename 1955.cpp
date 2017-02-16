#include <bits/stdc++.h>

using namespace std;

int G[1005][1005];
int cor[1005], n;
bool fl;

void dfs(int v, int c){
	cor[v] = c;
	for(int i = 0; i < n and !fl; i++){
		if(!G[v][i] and v != i){
			if(!cor[i])
				dfs(i, (c == 1) ? 2 : 1);
			else if(cor[i] == cor[v]){
				fl = true;
			}
		}
	}
}

int main(){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	cin >> n;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cin >> G[i][j];
	
	dfs(0, 1);
	cout << (fl ? "Fail!" : "Bazinga!") << '\n';
	
    return 0;
} 
