// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Ho Ho Ho
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1759

#include <stdio.h>
 
int main() {
 
    int h,i;
    scanf("%d",&h);
    for(i=0;i<h;i++){
        printf("Ho");
        if(i<h-1){
            printf(" ");
        }
    }
    printf("!\n");
 
    return 0;
}
