// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Validação de Nota
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1117

#include <stdio.h>
 
int main() {
 
    double a,b,s;
    do{
        scanf("%lf",&a);
        if(a<0 || a>10){
            printf("nota invalida\n");
        }
    }while(a<0 || a>10);
    do{
        scanf("%lf",&b);
        if(b<0 || b>10){
            printf("nota invalida\n");
        }
    }while(b<0 || b>10);
    s = (a+b)/2;
    if(s==0 || s==1 || s==2 || s==3 || s==4 || s==5 || s==6 || s==7 || s==8 || s==9 || s==10){
        printf("media = %.0f\n",s);
    }else{
        printf("media = %.2f\n",s);
    }
 
    return 0;
}
