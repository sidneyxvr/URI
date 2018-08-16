// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: 106 Milhas Para Chicago
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1655

#include <bits/stdc++.h>

using namespace std;

double G[105][105];
const int INF = 1e4;

int main(){

    int n, m, a, b, p;
    while(cin >> n and n){
        cin >> m;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j)
                    G[i][j] = 0;
                else
                    G[i][j] = -1;
            }
        }
        for(int i = 0; i < m; i++){
            cin >> a >> b >> p;
            G[a-1][b-1] = p * 0.01;
            G[b-1][a-1] = p * 0.01;
        }
        for(int k = 0; k < n; k++)
            for(int i = 0; i < n; i++)
                for(int j = 0; j < n; j++)
                    G[i][j] = max(G[i][j], (G[i][k] * G[k][j]));
        
        cout << fixed << setprecision(6) << G[0][n-1]*100 << " percent\n";
    }
    return 0;
}
