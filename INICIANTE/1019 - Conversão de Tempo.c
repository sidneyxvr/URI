// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Conversão de Tempo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1019

#include <stdio.h>
 
int main() {
 
    int n,h,m,s;
    scanf("%d",&n);
    if (n>=3600){
        h = n/3600;
        n = n%3600;
    }else{
        h = 0;
    }
    if(n>=60){
        m = n/60;
        n = n%60;
    }else{
        m = 0;
    }
    if(n<60){
        s = n;
    }
    printf("%d:%d:%d\n",h,m,s);
 
    return 0;
}
