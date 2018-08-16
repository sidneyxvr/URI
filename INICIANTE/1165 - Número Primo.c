// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Número Primo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1165

#include <stdio.h>
 
int main() {
 
    int a,i,n,j,p;
    do{
        scanf("%d",&n);
    }while(n<1 || n>100);
    for(i=1;i<=n;i++){
        do{
            scanf("%d",&a);
        }while(a<1 || a>10000000);
        j=1;
        p=1;
        while(a>=j){
            if(a%j==0 && j!=1 && j!=a){
                p=0;
            }
            j++;
        }
        if(p==1 && a!=1){
            printf("%d eh primo\n",a);
        }else{
            printf("%d nao eh primo\n",a);
        }
    }
 
    return 0;
}
