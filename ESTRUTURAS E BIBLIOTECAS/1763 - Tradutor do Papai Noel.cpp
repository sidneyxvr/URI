// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Tradutor do Papai Noel
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1763

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	
	map<string, string> m;
	m["brasil"] = "Feliz Natal!";
	m["alemanha"] = "Frohliche Weihnachten!";
	m["austria"] = "Frohe Weihnacht!";
	m["coreia"] = "Chuk Sung Tan!";
	m["espanha"] = "Feliz Navidad!";
	m["grecia"] = "Kala Christougena!";
	m["estados-unidos"] = "Merry Christmas!";
	m["inglaterra"] = "Merry Christmas!";
	m["australia"] = "Merry Christmas!";
	m["portugal"] = "Feliz Natal!";
	m["suecia"] = "God Jul!";
	m["turquia"] = "Mutlu Noeller";
	m["argentina"] = "Feliz Navidad!";
	m["chile"] = "Feliz Navidad!";
	m["mexico"] = "Feliz Navidad!";
	m["antardida"] = "Merry Christmas!";
	m["canada"] = "Merry Christmas!";
	m["irlanda"] = "Nollaig Shona Dhuit!";
	m["belgica"] = "Zalig Kerstfeest!";
	m["italia"] = "Buon Natale!";
	m["libia"] = "Buon Natale!";
	m["siria"] = "Milad Mubarak!";
	m["marrocos"] = "Milad Mubarak!";
	m["japao"] = "Merii Kurisumasu!";
	
	string s;
	while(getline(cin, s)){
		if(m[s] != "") cout << m[s] << '\n';
		else cout << "--- NOT FOUND ---\n";
	}
	
    return 0;
}
