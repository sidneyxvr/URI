// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Conta
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1866

#include <stdio.h>
 
int main() {

    int n,i,x;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        if(x%2==0){
            printf("0\n");
        }else{
            printf("1\n");
        }
    }
 
    return 0;
}
