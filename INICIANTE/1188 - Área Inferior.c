// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Área Inferior
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1188

#include <stdio.h>
 
int main() {
 
    double m[12][12],soma,media;
    int i,j;
    char c;
    scanf("%c",&c);
    soma=media=0;
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&m[j][i]);
            if(i+j>11 && i+j<i+i){
                soma+=m[j][i];
            }
            media=soma/30;
        }
    }
    if(c=='S'){
        printf("%.1f\n",soma);
    }
    if(c=='M'){
        printf("%.1f\n",media);
    }
 
    return 0;
}
