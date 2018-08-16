// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Tempo de Jogo com Minutos
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1047

#include <stdio.h>
 
int main() {
 
    int h1,m1,h2,m2,minuto1,minuto2,tempo;
    h1=m1=h2=m2=minuto1=minuto2=tempo=0;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    minuto1 = (h1*60)+m1;
    minuto2 = (h2*60)+m2;
    tempo = minuto2-minuto1;
    if(h1>h2){
        tempo = (1440 + tempo);
    }
    if((h1==h2) && (m1>m2)){
        tempo = 1440 - (m1-m2);
    }

    if((h1==m1) && (h1==h2) && (h1==m2)){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }else if((h1==h2) && (m1==m2) ){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",tempo/60,tempo%60);
    }
 
    return 0;
}
