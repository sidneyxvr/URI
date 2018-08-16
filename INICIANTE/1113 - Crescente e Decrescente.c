// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Crescente e Decrescente
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1113

#include <stdio.h>
 
int main() {
 
   int a,b;
   while(scanf("%d %d",&a,&b) && a!=b){
        if(a<b){
            printf("Crescente\n");
        }else{
            printf("Decrescente\n");
        }
   }
 
    return 0;
}
