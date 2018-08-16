// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Grenais
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1131

#include <stdio.h>
 
int main() {
 
    int a,inter,gremio,vi,vg,e,c;
    vi=vg=e=c=0;
    do{
        scanf("%d %d",&inter,&gremio);
        if(inter>gremio){
            vi += 1;
        }else if(gremio>inter){
            vg += 1;
        }else{
            e += 1;
        }
        c+=1;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&a);
    }while(a==1);
    printf("%d grenais\n",c);
    printf("Inter:%d\n",vi);
    printf("Gremio:%d\n",vg);
    printf("Empates:%d\n",e);
    if(vi>vg){
        printf("Inter venceu mais\n");
    }else if(vg>vi){
        printf("Gremio venceu mais\n");
    }else{
        printf("Nao houve vencedor\n");
    }
 
    return 0;
}
