// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Motoboy
// Nível: 4
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1286

#include <bits/stdc++.h>

using namespace std;

int knapsack(int W, int wt[], int val[], int n)
{
   int i, w;
   int K[n+1][W+1];
 
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }
 
   return K[n][W];
}

int main(){

    int t, w, v[30], p[30];
    while(cin >> t and t){
        cin >> w;
        for(int i = 0; i < t; i++)
            cin >> v[i] >> p[i];
            
        cout << knapsack(w, p, v, t) << " min.\n";
        
    }

	return 0;
}
