// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Número Perfeito
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1164

#include <stdio.h>
 
int main() {
 
    int a,n,i,j,soma;
    do{
        scanf("%d",&n);
    }while(n<1 || n>20);
    for(i=1;i<=n;i++){
        do{
            scanf("%d",&a);
        }while(a<0 || a>100000000);
        j=1;
        soma=0;
        while(a>j){
            if(a%j==0){
                soma += j;
            }
            j++;
        }
        if(a==soma){
            printf("%d eh perfeito\n",a);
        }else{
            printf("%d nao eh perfeito\n",a);
        }
    }
 
    return 0;
}
