// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Árvore Binária de Busca
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1195

#include <bits/stdc++.h>  
#define D(x) cout << #x << " = " << x << '\n'
using namespace std; 

struct node{
	int v;
	node *l, *r;
	node(int _v){
		v = _v;
		r = l = nullptr;
	}
};

void insert(node *root, int v){
	if(v > root->v){
		if(root->r == nullptr)
			root->r = new node(v);
		else
			insert(root->r, v);
	}else{
		if(root->l == nullptr)
			root->l = new node(v);
		else
			insert(root->l, v);
	}
}

void pre(node *root){
	cout << ' ' << root->v;
	if(root->l != nullptr)
		pre(root->l);
	if(root->r != nullptr)
		pre(root->r);
}

void inf(node *root){
	if(root->l != nullptr)
		inf(root->l);
	cout << ' ' << root->v;
	if(root->r != nullptr)
		inf(root->r);
}

void pos(node *root){
	if(root->l != nullptr)
		pos(root->l);
	if(root->r != nullptr)
		pos(root->r);
	cout << ' ' << root->v;
}

int main (){
	
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int t, n, v, x = 1;
	cin >> t;
	node *root = nullptr;
	while(t--){
		cin >> n;
		while(n--){
			cin >> v;
			if(root == nullptr)
				root = new node(v);
			else
				insert(root, v);
		}
		cout << "Case " << x++ << ":\n";
		cout << "Pre.:";
		pre(root);
		cout << "\nIn..:";
		inf(root);
		cout << "\nPost:";
		pos(root);
		cout << "\n\n";
		root = nullptr;
	}

	return  0; 
}

