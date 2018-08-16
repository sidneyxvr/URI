// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Coluna na Matriz
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1182

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
        for(i=0;i<12;i++){
            soma+=m[n][i];
        }
        printf("%.1f\n",soma);
    }
    if(c=='M'){
        for(i=0;i<12;i++){
            media+=m[n][i];
        }
        media/=i;
        printf("%.1f\n",media);
    }
 
    return 0;
}
