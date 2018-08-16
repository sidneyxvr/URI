// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Números Pares
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1059

#include <stdio.h>
 
int main() {
 
    int a = 1;
    do{
        if(a%2==0){
            printf("%d\n",a);
        }
        a++;
    }while(a<=100);

 
    return 0;
}
