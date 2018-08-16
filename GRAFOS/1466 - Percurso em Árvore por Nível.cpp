// Autor: Sidney Xavier<sidneyxvr@gmail.com>
// Nome: Percurso em Árvore por Nível
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1466

#include <bits/stdc++.h>

using namespace std;

bool fl;

struct node{
	int v;
	node *l, *r;
	node(int _v){
		v = _v;
		l = r = nullptr;
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

void bfs(node *root){
	queue<node*> q;
	q.push(root);
	node *k;
	while(!q.empty()){
		k = q.front();
		q.pop();
		if(fl)
			cout << ' ';
		fl = true;
		cout << k->v;
		if(k->l != nullptr)
			q.push(k->l);
		if(k->r != nullptr)
			q.push(k->r);
	}
}

int main(){

	int t, n, v, x = 1;
	cin >> t;
	node *root = nullptr;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> v;
			if(root == nullptr)
				root = new node(v);
			else
				insert(root, v);
		}
		fl = false;
		cout << "Case " << x++ << ":\n";
		bfs(root);
		cout << "\n\n";
		root = nullptr;
	}
	return 0;
}
