// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: A Corrida de Lesmas
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1789

#include <stdio.h>
 
int main() {
 
    int n,v[500],i,t,l;

    while(scanf("%d",&n)!=EOF){
        for(i=0;i<n;i++){
            scanf("%d",&v[i]);
            if(i==0){
                t=v[0];
            }
            if(v[i]>t && i!=0){
                t=v[i];
            }
        }
        if(t<10){
            l=1;
        }if(t>=10 && t<20){
            l=2;
        }if(t>=20){
            l=3;
        }
        printf("%d\n",l);
    }
 
    return 0;
}
