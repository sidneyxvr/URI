// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Experiências
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1094

#include <stdio.h>
 
int main() {
 
    int n,i,x;
    double rato,sapo,coelho,total;
    char tipo;
    scanf("%d",&n);
    rato=sapo=coelho=total=0;
    for(i=1;i<=n;i++){
        do{
            scanf("%d %c",&x,&tipo);
        }while(x<1 || x>15 );
        if(tipo=='R'){
            rato += (float)x;
        }
        if(tipo=='S'){
            sapo += (float)x;
        }
        if(tipo=='C'){
            coelho += (float)x;
        }
        total += x;
    }
    printf("Total: %.0f cobaias\n",total);
    printf("Total de coelhos: %.0f\n",coelho);
    printf("Total de ratos: %.0f\n",rato);
    printf("Total de sapos: %.0f\n",sapo);
    printf("Percentual de coelhos: %.2f %%\n",coelho/total*100);
    printf("Percentual de ratos: %.2f %%\n",rato/total*100);
    printf("Percentual de sapos: %.2f %%\n",sapo/total*100);
 
    return 0;
}
