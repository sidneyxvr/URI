// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Linha na Matriz
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1181

#include <stdio.h>
 
int main() {
 
    double m[12][12],soma,media;
    int i,j,n;
    char c;
    scanf("%d %c",&n,&c);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&m[j][i]);
        }
    }
    soma=media=0;
    if(c=='S'){
        for(j=0;j<12;j++){
            soma+=m[j][n];
        }
        printf("%.1f\n",soma);
    }
    if(c=='M'){
        for(j=0;j<12;j++){
            media+=m[j][n];
        }
        media/=j;
        printf("%.1f\n",media);
    }
 
    return 0;
}
