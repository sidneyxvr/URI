// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Tempo de um Evento
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1061

#include <stdio.h>
 
int main() {
 
    int w,x,y,z,wf,xf,yf,zf,total;
    scanf("Dia %d",&w);
    scanf("%d : %d : %d\n",&x,&y,&z);
    scanf("Dia %d",&wf);
    scanf("%d : %d : %d",&xf,&yf,&zf);
    w *= 86400;
    wf *= 86400;
    x *= 3600;
    xf *= 3600;
    y *= 60;
    yf *= 60;
    total = (wf+xf+yf+zf)-(w+x+y+z);
    w=x=y=z=0;
        w = total/86400;
        total = total%86400;
        x = total/3600;
        total = total%3600;
        y = total/60;
        total = total%60;
        z = total;
    printf("%d dia(s)\n",w);
    printf("%d hora(s)\n",x);
    printf("%d minuto(s)\n",y);
    printf("%d segundo(s)\n",z);

 
    return 0;
}
