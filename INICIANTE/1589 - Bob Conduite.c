// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Bob Conduite
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1589

#include <stdio.h>
 
int main() {
 
    unsigned int a,b,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        printf("%d\n",a+b);
    }
 
    return 0;
}
