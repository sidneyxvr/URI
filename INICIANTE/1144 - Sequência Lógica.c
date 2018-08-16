// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Sequência Lógica
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1144

#include <stdio.h>
 
int main() {
 
    int a,b,c,d,e,i,n;
    scanf("%d",&n);
    a=b=c=1;
    for(i=1;i<=n;i++){
        b=a*a;
        c=b*a;
        printf("%d %d %d\n",a,b,c);
        d=b+1;
        e=c+1;
        printf("%d %d %d\n",a,d,e);
        a++;
        b++;
        c++;
    }

    return 0;
}
