// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Dividindo X por Y
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1116

#include <stdio.h>
 
int main() {
 
    int n,i;
    double x,y,divisao;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%lf %lf",&x,&y);
        if(y==0){
            printf("divisao impossivel\n");
        }else{
            divisao = x/y;
            printf("%.1f\n",divisao);
        }
    }
 
    return 0;
}
