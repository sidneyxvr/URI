// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Libertadores
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1536

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int x, t1, t2;
    cin >> x;
    while(x--){
        int  gft1 = 0, gft2 = 0, pt1 = 0, pt2 = 0, sgt1 = 0, sgt2 = 0;
        scanf("%d x %d",&t1 , &t2);
        gft2 += t2;
        sgt1 += t1;
        sgt2 += t2;
        if( t1 > t2 )
            pt1 += 3;
        else if( t1 < t2 )
            pt2 += 3;
        else{
            pt1 += 1;
            pt2 += 1;
        }
        scanf("%d x %d",&t2 , &t1);
        gft1 += t1;
        sgt1 += t1;
        sgt2 += t2;
        if( t1 > t2 )
            pt1 += 3;
        else if( t1 < t2 )
            pt2 += 3;
        else{
            pt1 += 1;
            pt2 += 1;
        }
        if( pt1 > pt2 )
            cout << "Time 1" << endl;
        else if( pt2 > pt1 )
            cout << "Time 2" << endl;
        else{
            if( sgt1 > sgt2 )
                cout << "Time 1" << endl;
            else if( sgt2 > sgt1 )
                cout << "Time 2" << endl;
            else{
                if( gft1 > gft2 )
                    cout << "Time 1" << endl;
                else if( gft2 > gft1 )
                    cout << "Time 2" << endl;
                else
                    cout << "Penaltis" << endl;
            }
        }
    }

    return 0;
}

