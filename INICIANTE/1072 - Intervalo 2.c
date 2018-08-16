// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Intervalo 2
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1072

#include <stdio.h>
 
int main() {
 
    int x,i,in,out,n;
    in=out=0;
    do{
        scanf("%d",&n);
    }while(n>10000);
    for(i=1;i<=n;i++){
        do{
            scanf("%d",&x);
        }while(x<-10000000 && x>10000000);
        if(x>=10 && x<=20){
            in += 1;
        }else{
            out += 1;
        }
    }
    printf("%d in\n",in);
    printf("%d out\n",out);
 
    return 0;
}
