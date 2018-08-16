// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: MacPRONALTS
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1985

#include <stdio.h>
 
int main() {
 
    double q,total=0;
    int p,i,qtde;
    scanf("%d",&p);
    for(i=0;i<p;i++){
        scanf("%lf %d",&q,&qtde);
        if(q==1001){
            total+=1.5*qtde;
        }
        if(q==1002){
            total+=2.5*qtde;
        }
        if(q==1003){
            total+=3.5*qtde;
        }
        if(q==1004){
            total+=4.5*qtde;
        }
        if(q==1005){
            total+=5.5*qtde;
        }
    }
    printf("%.2f\n",total);
 
    return 0;
}
