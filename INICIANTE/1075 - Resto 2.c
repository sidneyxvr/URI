// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Resto 2
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1075

#include <stdio.h>
 
int main() {
 
    int n,i;
    do{
        scanf("%d",&n);
    }while(n>10000);
    for(i=1;i<=10000;i++){
        if(i%n==2){
            printf("%d\n",i);
        }
    }
 
    return 0;
}
