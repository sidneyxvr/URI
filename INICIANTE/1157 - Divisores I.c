// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Divisores I
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1157

#include <stdio.h>
 
int main() {
 
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        if(a%i==0){
            printf("%d\n",i);
        }
    }
 
    return 0;
}
