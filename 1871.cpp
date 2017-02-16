#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int a, b, num, num2;
	string nome = "12345678901345676785";
	
	while((cin >> a >> b) && a!=0 || b!=0){
		num = a+b;
		int n = 0;
		do{
			num2=num%10;
			if(num2!=0){
				nome[n] = num2 + '0';
				n++;
			}
			num /= 10;
		}while(num!=0);
		for(int i = n-1 ; i >= 0 ; i--){
			cout << nome[i];
		}
		cout << endl;
	}
	
	return 0;
} 
