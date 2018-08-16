// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Fibonacci em Vetor
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1176

#include <stdio.h>
 
int main() {
 
    long long v[61];
    int n,i,j;
    v[0]=0;
    v[1]=1;
    for(i=2;i<61;i++){
        v[i]=v[i-1]+v[i-2];
    }
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&j);
        printf("Fib(%d) = %lld\n",j,v[j]);
    }
 
    return 0;
}
