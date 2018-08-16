// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Crescimento Populacional
// Nível: 2
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1160

#include <stdio.h>
 
int main() {
 
    int i,n,c;
    double pa,pb,g1,g2;
    do{
        scanf("%d",&n);
    }while(n<1 || n>3000);
    for(i=1;i<=n;i++){
        scanf("%lf %lf %lf %lf",&pa,&pb,&g1,&g2);
        c=0;
        while(pa<=pb){
            pa = pa + ((int)(pa*g1/100));
            pb = pb + ((int)(pb*g2/100));
            c++;
            if(c>100){
                pa=2;
                pb=1;
            }
        }
        if(c>100){
            printf("Mais de 1 seculo.\n");
        }else{
            printf("%d anos.\n",c);
        }
    }
 
    return 0;
}
