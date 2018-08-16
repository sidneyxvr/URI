// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Quadrado de Pares
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1073

#include <stdio.h>
 
int main() {

    int n,i;
    do{
       scanf("%d",&n);
    }while(n<5 && n>2000);
    for(i=1;i<=n;i++){
        if(i%2==0){
            printf("%d^2 = %d\n",i,(i*i));
        }
    }
 
    return 0;
}
