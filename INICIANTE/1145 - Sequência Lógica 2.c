// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Sequência Lógica 2
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1145

#include <stdio.h>
 
int main() {
 
    int x,y,a,b,i;
    scanf("%d %d",&x,&y);
    a=1;
    while(a<=y){
            b=1;
        for(i=1;i<=x;i++){

            if(a<=y){
                printf("%d",a);
                a++;
                if(a<=y){
                    if(b<x){
                        printf(" ");
                        b++;
                    }
                }
            }
        }
        printf("\n");
    }
 
    return 0;
}
