#include <iostream>
#include <string>

using namespace std;

int main(){

    string ano;
    int bissexto, huluculu, bulukulu;
    long long por3, por4, por5, por11, por100, por400, soma, par, impar;
    bool b=false;
    while(cin >> ano){
        if(b)
            cout << endl;
        b=true;
        bissexto=huluculu=bulukulu=por3=por4=por5=por11=por100=por400=soma=par=impar=0;
        for(int i=0;i<ano.length();i++)
            soma+=ano.at(i)-48;
        for(int i=0;i<ano.length();i+=2)
            par+=ano.at(i)-48;
        for(int i=1;i<ano.length();i+=2)
            impar+=ano.at(i)-48;
        if((par-impar)%11==0  )
            por11=1;
        if(soma%3==0)
            por3 = 1;
        if ( ((ano.at(ano.length()-1)-48)==0) || ((ano.at(ano.length()-1)-48)==5) )
            por5 = 1;
        if( ((ano.at(ano.length()-1)-48)+(ano.at(ano.length()-2)-48)==0) || (((ano.at(ano.length()-2)-48)*10) + (ano.at(ano.length()-1)-48))%4==0 )
            por4 = 1;
        if ( ((ano.at(ano.length()-1)-48)+(ano.at(ano.length()-2)-48)==0) )
            por100 = 1;
        int tem = ((ano.at(ano.length()-4)-48)*1000) + ((ano.at(ano.length()-3)-48)*100) + ((ano.at(ano.length()-2)-48)*10) + ((ano.at(ano.length()-1)-48));
        if ( tem%400==0 )
            por400=1;
        if((por4==1 && por100!=1) || por400==1)
            bissexto=1;
        if(por3==1 && por5==1)
            huluculu=1;
        if(por5==1 && por11==1 && bissexto==1)
            bulukulu=1;
        if(bissexto!=1 && huluculu!=1 && bulukulu!=1)
            cout << "This is an ordinary year." << endl;
        if(bissexto==1)
            cout << "This is leap year." << endl;
        if(huluculu==1)
            cout << "This is huluculu festival year." << endl;
        if(bulukulu==1)
            cout << "This is bulukulu festival year." << endl;
    }
    return 0;
}

