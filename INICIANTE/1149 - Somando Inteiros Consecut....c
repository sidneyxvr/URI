// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Somando Inteiros Consecut...
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1149

#include <stdio.h>
 
int main() {
 
    int a,b,i,s=0;
    scanf("%d %d",&a,&b);
    if(b<=0){
        do{
            scanf("%d",&b);
        }while(b<=0);
    }
    for(i=1;i<=b;i++){
        s+=a;
        a++;
    }
    printf("%d\n",s);
 
    return 0;
}
