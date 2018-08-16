// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Médias Ponderadas
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1079

#include <stdio.h>
 
int main() {
 
    int i,n;
    double a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%lf %lf %lf",&a,&b,&c);
        printf("%.1f\n",(a*2+b*3+c*5)/10);
    }
 
    return 0;
}
