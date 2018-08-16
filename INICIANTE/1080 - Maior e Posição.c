// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Maior e Posição
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1080

#include <stdio.h>
 
int main() {
 
    int a[100],i,c=0,local=0;
    for(i=0;i<100;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<100;i++){
        if(a[i]>c){
            c = a[i];
            local = i;
        }
    }
    printf("%d\n",c);
    printf("%d\n",local+1);
 
    return 0;
}
