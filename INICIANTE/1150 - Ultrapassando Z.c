// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Ultrapassando Z
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1150

#include <stdio.h>
 
int main() {
 
    int x,z,s,i;
    scanf("%d",&x);
    do{
        scanf("%d",&z);
    }while(z<=x);
    s=i=0;
    if(x<0){
        while(x<=0){
            s+=x;
            x++;
            i++;
        }
    }
    if(x>0){
        while(s<=z){
            s+=x;
            x++;
            i++;
        }
    }
    printf("%d\n",i);
 
    return 0;
}
