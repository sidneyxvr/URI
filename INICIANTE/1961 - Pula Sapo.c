// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Pula Sapo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1961

#include <stdio.h>
 
int main() {
 
    int p,n,i,v[101],e=0;
    scanf("%d %d",&p,&n);
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    for(i=0;i<n-1;i++){
        if(v[i+1]-v[i]<=p && v[i+1]-v[i]>=-p){
            e=1;
        }else{
            e=0;
            i=n;
        }
    }
    if(e!=1){
        printf("GAME OVER\n");
    }else{
        printf("YOU WIN\n");
    }
 
    return 0;
}
