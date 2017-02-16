#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	string num1, num2;
	bool e;
	
	cin >> n;
	while(n--){
		cin >> num1 >> num2;
		e=false;
		if(num2.length()>num1.length())
			e=true;
		else{
			int j=num1.length()-1;
			for(int i=num2.length()-1;i>=0;i--){
				if(num1.at(j)!=num2.at(i))
					e=true;
				j--;
			}
		}
		if(e)
			cout << "nao encaixa" << endl;
		else
			cout << "encaixa" << endl;
	}

	return 0;
}
