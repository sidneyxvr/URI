// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Sequência S II
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1156

#include <stdio.h>
 
int main() {
 
    double a,b,s;
    int i;
    s=1;
    a=3;
    b=2;
    for(i=1;i<=19;i++){
        s+=a/b;
        a+=2;
        b*=2;
    }
    printf("%.2f\n",s);
 
    return 0;
}
