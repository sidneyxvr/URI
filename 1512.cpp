#include <iostream>

using namespace std;

int main (){

	int n, a, b, aux, mmc;
	while((cin >> n >> a >> b) && n!=0){
		if(b > a){
			aux = b;
			b = a;
			a = aux;
		}
		if(a % b == 0)
			mmc = a;
		else{
			for (int i = 2;i <= b; i++){
				aux = a * i;
				if(aux % b == 0){
					mmc = aux;
					i = b + 1;
				}		
			}
		}
		int soma = n/a + n/b - n/mmc;
		cout << soma << endl;
	}
	return 0;
}
