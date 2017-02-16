#include <iostream>

using namespace std;

int fatorial(int x){
	int fatorial = 1;
	for(int i = x;i > 0; i--)
		fatorial *= i;
	return fatorial;
}

int main(){
	
	string num;
	int res, i, aux, c;
	
	while((cin >> num) && num.at(0)!='0'){
		res = c = 0;
		aux = 1;
		i = num.length();
		while(i--){
			res+=(num.at(c) - '0')*fatorial(i + 1);
			c++;
		}
		cout << res << endl;
	}
	return 0;
}
