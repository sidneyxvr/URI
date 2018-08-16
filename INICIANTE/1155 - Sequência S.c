// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Sequência S
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1155

#include <stdio.h>
 
int main() {
 
    double a,s;
    int i;
    s=1;
    a=2;
    for(i=1;i<=99;i++){
        s+=1/a;
        a+=1;
    }
    printf("%.2f\n",s);
 
    return 0;
}
