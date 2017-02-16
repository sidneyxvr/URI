#include <iostream>
#include <string>
using namespace std;

int main(){
	string nome, nome1, nome2;
	int x,n;
	cin >> x;
	while(x--){
		cin >> nome1;
		cin >> nome2;
		(nome1.length()>nome2.length()) ? n=nome1.length() : n=nome2.length();
		for(int i=0;i<n;i++){
			if(nome1.length() > i)
				nome+=nome1.at(i);
			if(nome2.length() > i)
				nome+=nome2.at(i);
		}
		cout << nome << endl;
		nome.clear();
	}
	return 0;
}
