// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Sequências Crescentes
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1146

#include <stdio.h>
 
int main() {
 
    int n,i;
    do{
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            printf("%d",i);
            if(i<n){
                printf(" ");
            }
        }
        if(n!=0){
            printf("\n");
        }
    }while(n!=0);
 
    return 0;
}
