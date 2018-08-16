// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Estiagem
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1023

#include <bits/stdc++.h>                                                                                                      
                                                                                                                              
using namespace std;                                                                                                          
                                                                                                                              
int main(){                                                                                                                   
                                                                                                                              
  ios_base::sync_with_stdio(false); cin.tie(nullptr);                                                                         
                                                                                                                              
  int n, p, q, tp, tq, x = 1;                                                                                                 
  map<int, int> m;                                                                                                            
  while(cin >> n and n){                                                                                                      
    tp = tq = 0;                                                                                                              
    while(n--){                                                                                                               
      cin >> p >> q;                                                                                                          
      tp += p; tq += q;                                                                                                       
      m[(q/p)] += p;                                                                                                          
    }                                                                                                                         
    if(x > 1) cout << '\n';                                                                                                   
    cout << "Cidade# " << x++ << ":\n";                                                                                       
    bool bl = false;                                                                                                          
    for(auto p: m){                                                                                                           
      if(bl) cout << ' ';                                                                                                     
      cout << p.second << '-' << p.first;                                                                                     
      bl = true;                                                                                                              
    }                                                                                                                         
    cout << '\n';                                                                                                             
    cout << fixed << setprecision(2);                                                                                         
    double k = ((tq * 1.0)/tp)*100;                                                                                           
    int f = k;                                                                                                                
    k = (double)(f/100.0);                                                                                                    
    cout << "Consumo medio: " << k << " m3.\n";                                                                               
    m.clear();                                                                                                                
  }                                                                                                                           
                                                                                                                              
  return 0;                                                                                                                   
}
