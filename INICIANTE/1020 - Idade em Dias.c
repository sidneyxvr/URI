// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Idade em Dias
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1020

#include <stdio.h>
 
int main() {
 
    int t,a,m,d;
    scanf("%d",&t);
    if (t>=365){
        a = t/365;
        t = t%365;
    }else{
        a = 0;
    }
    if(t>=30){
        m = t/30;
        t = t%30;
    }else{
        a = 0;
    }
    if(t<30){
        d = t;
    }
    printf("%d ano(s)\n",a);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);
 
    return 0;
}
