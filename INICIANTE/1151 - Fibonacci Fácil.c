// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Fibonacci Fácil
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1151

#include <stdio.h>
 
int main() {
 
    int v[46],i,n;
    v[0]=0;
    v[1]=1;
    for(i=2;i<46;i++){
        v[i]=v[i-1]+v[i-2];
    }
    do{
        scanf("%d",&n);
    }while(n<1 || n>46);
    for(i=0;i<n;i++){
        printf("%d",v[i]);
        if(i<(n-1)){
            printf(" ");
        }
    }
    printf("\n");
 
    return 0;
}
