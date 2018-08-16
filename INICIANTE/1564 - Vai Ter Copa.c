// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Vai Ter Copa?
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1564

#include <stdio.h>
 
int main() {
 
    int n;
    while(scanf("%d",&n)!=EOF){
        if(n>0){
            printf("vai ter duas!\n");
        }
        else{
            printf("vai ter copa!\n");
        }
    }
 
    return 0;
}
