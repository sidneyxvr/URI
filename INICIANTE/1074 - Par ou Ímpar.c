// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Par ou Ímpar
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1074

#include <stdio.h>
 
int main() {
 
    int n,x,i;
    do{
        scanf("%d",&n);
    }while(n>10000);
    for(i=1;i<=n;i++){
        scanf("%x",&x);
        if(x==0){
            printf("NULL\n");
        }
        if(x>0 && x%2==0){
            printf("EVEN POSITIVE\n");
        }
        if(x<0 && x%2==0){
            printf("EVEN NEGATIVE\n");
        }
        if(x>0 && x%2==1){
            printf("ODD POSITIVE\n");
        }
        if(x<0 && x%2==-1){
            printf("ODD NEGATIVE\n");
        }
    }

 
    return 0;
}
