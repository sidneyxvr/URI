// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Soma de Ímpares Consecuti...
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1158

#include <stdio.h>
 
int main() {
 
    int n,x,y,s,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&x,&y);
        s=j=0;
        while(j<y){
            if(x%2==1){
                s+=x;
                j++;
            }
            if(x%2==-1){
                s+=x;
                j++;
            }
            x++;
        }
        printf("%d\n",s);
    }
 
    return 0;
}
