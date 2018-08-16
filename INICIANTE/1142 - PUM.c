// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: PUM
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1142

#include <stdio.h>
 
int main() {
 
    int n,i,a,z;
    scanf("%d",&n);
    a = 1;
    for(i=1;i<=n;i++){
        z = a+2;
        while(a<=z){
            printf("%d ",a);
            a++;
        }
        printf("PUM\n");
        a++;
    }
 
    return 0;
}
