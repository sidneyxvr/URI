// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Sequencia IJ 1
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1095

#include <stdio.h>
 
int main() {
 
    int contador,i=1,j=60;
    for(contador=1;contador<=13;contador++){
        printf("I=%d J=%d\n",i,j);
        i += 3;
        j -= 5;
    }
 
    return 0;
}
