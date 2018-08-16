// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Soma de Ímpares Consecuti...
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1099

#include <stdio.h>
 
int main() {
 
    int n,x,y,i,soma;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%d %d",&x,&y);
        if(x>y){
            x -= 1;
        }
        if(x<y){
            x += 1;
        }
        soma = 0;
        while(x>y){
            if (x>y && x%2==1){
                soma += x;
            }
            x -= 1;
        }
        while(x<y){
            if (x<y && x%2==1){
                soma += x;
            }
            x += 1;
        }
        printf("%d\n",soma);
    }
 
    return 0;
}
